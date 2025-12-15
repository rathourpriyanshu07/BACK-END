from tkinter import *
from tkinter import messagebox
import os

# --------------------- Post Class ---------------------
class Post:
    def __init__(self, username, title, content):
        self.username = username
        self.title = title
        self.content = content

    def filename(self):
        # Replace spaces with underscores for filename safety
        return f"{self.username}_{self.title}.txt".replace(" ", "_")

    def save_post(self):
        try:
            with open(self.filename(), "w") as file:
                file.write(f"Name : {self.username}\n")
                file.write(f"Title : {self.title}\n\n")
                file.write(self.content)
            return True
        except Exception as e:
            messagebox.showerror("Error", f"Unable to save file: {e}")
            return False

# --------------------- GUI Application ---------------------
class MiniBlogApp:
    def __init__(self, root):
        self.root = root
        root.title("MiniBlog - Tkinter App")
        root.geometry("650x520")

        # Labels and Inputs
        Label(root, text="User Name:").grid(row=0, column=0, padx=10, pady=10, sticky="w")
        self.name_entry = Entry(root, width=50)
        self.name_entry.grid(row=0, column=1, padx=10, pady=10)

        Label(root, text="Post Title:").grid(row=1, column=0, padx=10, pady=10, sticky="w")
        self.title_entry = Entry(root, width=50)
        self.title_entry.grid(row=1, column=1, padx=10, pady=10)

        Label(root, text="Post Content:").grid(row=2, column=0, padx=10, pady=10, sticky="nw")
        self.content_text = Text(root, width=50, height=12)
        self.content_text.grid(row=2, column=1, padx=10, pady=10)

        # Buttons
        Button(root, text="Save Post", width=15, command=self.save_post).grid(row=3, column=1, sticky="w", pady=10)
        Button(root, text="View Post", width=15, command=self.display_post).grid(row=3, column=1, sticky="e", pady=10)

        # Listbox for saved posts
        Label(root, text="Saved Posts:").grid(row=4, column=0, padx=10, sticky="nw")
        self.post_list = Listbox(root, width=45, height=10)
        self.post_list.grid(row=4, column=1, padx=10, pady=10)

        self.load_posts()

    # --------------------- Load File List ---------------------
    def load_posts(self):
        self.post_list.delete(0, END)
        for file in os.listdir():
            if file.endswith(".txt"):
                self.post_list.insert(END, file)

    # --------------------- Save Post Function ---------------------
    def save_post(self):
        username = self.name_entry.get()
        title = self.title_entry.get()
        content = self.content_text.get("1.0", END).strip()

        if username == "" or title == "" or content == "":
            messagebox.showwarning("Warning", "All fields are required!")
            return

        post = Post(username, title, content)

        if post.save_post():
            messagebox.showinfo("Success", "Post saved successfully!")
            self.load_posts()

    # --------------------- View Post Function ---------------------
    def display_post(self):
        try:
            selected = self.post_list.get(ACTIVE)
            if not selected:
                messagebox.showwarning("Warning", "Please select a file!")
                return

            with open(selected, "r") as file:
                data = file.read()

            view_window = Toplevel()
            view_window.title(selected)
            view_window.geometry("450x400")

            text_area = Text(view_window, width=55, height=25)
            text_area.pack(padx=10, pady=10)
            text_area.insert(END, data)

        except FileNotFoundError:
            messagebox.showerror("Error", "File not found!")
        except Exception as e:
            messagebox.showerror("Error", f"Unexpected error: {e}")

# --------------------- Main Program ---------------------
root = Tk()
app = MiniBlogApp(root)
root.mainloop()
