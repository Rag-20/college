import psycopg2


connection = psycopg2.connect(user="postgres",
                                  password="Raagu@20",
                                  host="localhost",
                                  port="5432",
                                  database="postgres")
cursor = connection.cursor()

drp="DROP TABLE IF EXISTS temperature"
cursor.execute(drp)

crt="CREATE TABLE IF NOT EXISTS temperature(city_id int primary key,city_name varchar(20),avg_max_temperature_celcious int, month varchar(20))"
cursor.execute(crt)


insrt = " INSERT INTO temperature (city_id, city_name,avg_max_temperature_celcious , month) VALUES (%s,%s,%s,%s)"
record = [(1, 'pune', 40, 'march'),
          (2, 'mumbai', 38, 'feb'),
          (3, 'hyderabad', 35, 'jun'),
          (4, 'nagpur', 42, 'april'),
          (5, 'nashik', 41, 'may'),
          (6, 'Cochin', 40, 'april'),
          (7, 'pandikkad', 43, 'jun')]

for i in record:
    cursor.execute(insrt, i)

cursor.execute('select * from temperature')

data = cursor.fetchall()
for i in data:
    print(i)
    

count = cursor.rowcount

print(count, "Record inserted successfully into temperature table")


upd = "Update temperature set avg_max_temperature_celcious = 42 where city_name='pune'"
cursor.execute(upd)
count = cursor.rowcount
print("\n\n")
print(count, "Record Updated successfully ")

print("Table After updating record ")
disp = "select * from temperature"
cursor.execute(disp)
record = cursor.fetchall()
for i in record:
    print(i)


dele = "Delete from temperature where month = 'march'"
cursor.execute(dele)
disp = "select * from temperature"
count = cursor.rowcount
print("\n\n")
print(count, "Record deleted successfully ")
cursor.execute(disp)


print("Table After deleting record ")
record = cursor.fetchall()
for i in record:
    print(i)


connection.commit()





# closing database connection.
cursor.close()
connection.close()
print("PostgreSQL connection is closed")
