import json

class Book:
    def __init__(self, title, author, pages, current_page=1):
        self.title = title
        self.author = author
        self.pages = pages
        self.current_page = current_page
    
    def turn_page(self):
        if self.current_page < self.pages:
            self.current_page += 1
        else:
            print("You have reached the last page.")
    
    def __str__(self):
        return f"{self.title} by {self.author}"
    
    def to_dict(self):
        return {
            "title": self.title,
            "author": self.author,
            "pages": self.pages,
            "current_page": self.current_page
        }
    
    @classmethod
    def from_dict(cls, book_dict):
        return cls(
            title=book_dict["title"],
            author=book_dict["author"],
            pages=book_dict["pages"],
            current_page=book_dict["current_page"]
        )

class Library:
    def __init__(self):
        self.books = []
    
    def add_book(self, book):
        self.books.append(book)
    
    def remove_book(self, book):
        self.books.remove(book)
    
    def open_book(self, book):
        print(f"Current page of {book.title}: {book.current_page}")
    
    def save_library(self, file_name):
        book_list = [book.to_dict() for book in self.books]
        with open(file_name, "w") as file:
            json.dump(book_list, file)
    
    def load_library(self, file_name):
        with open(file_name, "r") as file:
            book_list = json.load(file)
        self.books = [Book.from_dict(book) for book in book_list]

# 创建图书馆对象
library = Library()

# 添加书籍
book1 = Book("Book 1", "Author 1", 100)
book2 = Book("Book 2", "Author 2", 200)
library.add_book(book1)
library.add_book(book2)

# 打开书籍
library.open_book(book1)

# 翻页
book1.turn_page()
library.open_book(book1)

# 移除书籍
library.remove_book(book1)

# 保存图书馆到文件
library.save_library("library.json")

# 从文件加载图书馆
library.load_library("library.json")