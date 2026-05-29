import sqlite3
from datetime import datetime

conn = sqlite3.connect("clients.db")
cursor = conn.cursor()

cursor.execute("""
    CREATE TABLE IF NOT EXISTS clients (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        clients_name TEXT,
        phone TEXT,
        service TEXT,
        created_at TEXT
)
""")

while True:

    answer = input("""MENU:" 
    1. Show all clients
    2. Add client
    3. Delete client by id
    4. Search client by name
    5. Exit
                   
    Choose(1/2/3/4/5): 
                   """)

    if answer == '1':
        cursor.execute("SELECT * FROM clients")
        rows = cursor.fetchall()

        for row in rows:
            print(f"{row[0]} | {row[1]} | {row[2]} | {row[3]} | {row[4]}")

    elif answer == '2':
        clients_name = input("Clients name: ")
        phone = input("Clients phone: ")
        service = input("Service: ")
        created_at = datetime.now().strftime("%Y-%m-%d %H:%M")
        
        cursor.execute(
            "INSERT INTO clients (clients_name, phone, service, created_at) VALUES (?, ?, ?, ?)",
            (clients_name, phone, service, created_at) 
        )
        conn.commit()
        print("Client ADDED!")
    
    elif answer == '3':
        delete_id = input("Which client you want delete by ID: ")
        cursor.execute("DELETE FROM clients WHERE id = ?",(delete_id,))
        conn.commit()
        print("Client deleted!")

    elif answer == '4':
        w_name = input("Write client's name whom you want find: ")
        cursor.execute("SELECT * FROM clients WHERE clients_name LIKE ?", ('%' + w_name + '%',)) 
        rows = cursor.fetchall()
        
        if rows:
                for row in rows:
                    print(f"{row[0]} | {row[1]} | {row[2]} | {row[3]} | {row[4]}")
        else:
            print("Client not found")    
    
    elif answer == '5':
        print("Exiting!")
        break
    
conn.close()