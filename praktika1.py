import sqlite3

conn = sqlite3.connect("appointments.db")
cursor = conn.cursor()

cursor.execute("SELECT * FROM appointments")
rows = cursor.fetchall()

print("CURRENT APPOINTMENTS:")
for row in rows:
    print(f"{row[0]} | {row[1]} | {row[2]} | {row[3]} | {row[4]}")

answer = input("Do you want to add new appointment? (y/n): ")

if answer == "y":
    client_name = input("Client name: ")
    service = input("Service: ")
    date = input("Date: ")
    time = input("Time: ")

    cursor.execute(
        "INSERT INTO appointments (client_name, service, date, time) VALUES (?, ?, ?, ?)",
        (client_name, service, date, time)
    )

    conn.commit()
    print("Added!")

conn.close()