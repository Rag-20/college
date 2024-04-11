import psycopg2


connection = psycopg2.connect(user="postgres",
                                  password="Raagu@20",
                                  host="localhost",
                                  port="5432",
                                  database="postgres")
cursor = connection.cursor()

drp="DROP TABLE IF EXISTS hospital"
cursor.execute(drp)

crt="CREATE TABLE IF NOT EXISTS hospital(hosp_id int primary key,hosp_name varchar(20),contact_no bigint,licenece_no int,speciality varchar(20))"
cursor.execute(crt)


insrt = " INSERT INTO hospital (hosp_id,hosp_name,contact_no,licenece_no,speciality) VALUES (%s,%s,%s,%s,%s)"
record = [(1, 'radiance hospital', 9500303030, 2323, 'orthopaedic'),
          (2, 'rance hospital', 3330303030, 2443, 'orthopaedic'),
          (3, 'Iadiance hospital', 4440303030, 2355, 'tumor'),
          (4, 'Cadiance hospital', 2200303030, 2388, 'orthopaedic'),
          (5, 'inamdar hospital', 9503333030, 2443, 'cancer'),
          (6, 'Ruby hospital', 9501113030, 2344, 'orthopaedic'),
          (7, 'Sassoon hospital', 9500322230, 5523, 'heart')]

for i in record:
    cursor.execute(insrt, i)

cursor.execute('select * from hospital')

data = cursor.fetchall()
for i in data:
    print(i)
    

count = cursor.rowcount

print(count, "Record inserted successfully into hospital table")


upd = "Update hospital set contact_no = 9393939393 where hosp_name like 'radiance hospital'"
cursor.execute(upd)
count = cursor.rowcount
print("\n\n")
print(count, "Record Updated successfully ")

print("Table After updating record ")
disp = "select * from hospital where hosp_name like 'radiance hospital'"
cursor.execute(disp)
record = cursor.fetchall()
for i in record:
    print(i)


dele = "Delete from hospital where speciality like 'orthopaedic'"
cursor.execute(dele)

count = cursor.rowcount
print("\n\n")
print(count, "Record deleted successfully ")

print("Table After deleting record ")
disp = "select * from hospital"
cursor.execute(disp)
record = cursor.fetchall()
for i in record:
    print(i)


connection.commit()





# closing database connection.
cursor.close()
connection.close()
print("PostgreSQL connection is closed")
