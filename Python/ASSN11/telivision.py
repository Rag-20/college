import psycopg2


connection = psycopg2.connect(user="postgres",
                                  password="Raagu@20",
                                  host="localhost",
                                  port="5432",
                                  database="postgres")
cursor = connection.cursor()

drp="DROP TABLE IF EXISTS TelevisionShows"
cursor.execute(drp)

crt="CREATE TABLE IF NOT EXISTS TelevisionShows(show_id int primary key,show_name varchar(20),day_telecast varchar(20),show_type varchar(20))"
cursor.execute(crt)


insrt = " INSERT INTO TelevisionShows (show_id,show_name,day_telecast ,show_type) VALUES (%s,%s,%s,%s)"
record = [(1, 'Khabar', 'mon-fri', 'news'),
          (2, 'Kapil Sharma', 'thursday', 'comedy'),
          (3, 'DID', 'saturday', 'dabce'),
          (4, 'Indian idol', 'sunday', 'music'),
          (5, 'TMKOC', 'mon-fri', 'comedy'),
          (6, 'Shaadi', 'mon-fri', 'tv'),
          (7, 'Kaavya', 'mon-fri', 'tv')]

for i in record:
    cursor.execute(insrt, i)

cursor.execute('select * from TelevisionShows')

data = cursor.fetchall()
for i in data:
    print(i)
    

count = cursor.rowcount

print(count, "Record inserted successfully into TelevisionShows table")


upd = "Update TelevisionShows set day_telecast = 'saturday' where day_telecast='thursday'"
cursor.execute(upd)
count = cursor.rowcount
print("\n\n")
print(count, "Record Updated successfully ")

print("Table After updating record ")
disp = "select * from TelevisionShows"
cursor.execute(disp)
record = cursor.fetchall()
for i in record:
    print(i)


dele = "Delete from TelevisionShows where show_type = 'comedy'"
cursor.execute(dele)
disp = "select * from TelevisionShows"
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
