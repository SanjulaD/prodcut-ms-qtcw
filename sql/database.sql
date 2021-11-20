-- --------------------------------------------------------
-- Host:                         G:\NSBM\QT\product_management_system\build-product_management_system-Desktop_Qt_5_12_11_MinGW_64_bit-Debug\database.db
-- Server version:               3.34.0
-- Server OS:                    
-- HeidiSQL Version:             11.3.0.6295
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES  */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Dumping database structure for database
CREATE DATABASE IF NOT EXISTS "database";
-- USE "database" neither supported nor required;

-- Dumping structure for table database.products
CREATE TABLE IF NOT EXISTS "products" (
	"p_id" UNKNOWN NOT NULL,
	"p_name" VARCHAR(255) NULL,
	"p_description" VARCHAR(50) NULL,
	"p_quantity" VARCHAR(50) NULL,
	"p_purchase_price" VARCHAR(50) NULL,
	"p_sales_price" VARCHAR(50) NULL,
	"added_date" VARCHAR(50) NULL,
	"user_id" VARCHAR(50) NULL,
	PRIMARY KEY ("p_id"),
	CONSTRAINT "0" FOREIGN KEY ("user_id") REFERENCES "users" ("id") ON UPDATE NO ACTION ON DELETE CASCADE
);

-- Dumping data for table database.products: -1 rows
DELETE FROM "products";
/*!40000 ALTER TABLE "products" DISABLE KEYS */;
/*!40000 ALTER TABLE "products" ENABLE KEYS */;

-- Dumping structure for table database.users
CREATE TABLE IF NOT EXISTS "users" (
	"id" UNKNOWN NOT NULL,
	"username" VARCHAR(255) NULL,
	"password" VARCHAR(50) NULL,
	"firstname" VARCHAR(50) NULL,
	"lastname" VARCHAR(50) NULL,
	"phonenumber" VARCHAR(50) NULL,
	"email" VARCHAR(50) NULL,
	"reg_date" DATETIME NULL,
	"role" VARCHAR(50) NULL, "is_logged" VARCHAR(10) NULL,
	PRIMARY KEY ("id")
);

-- Dumping data for table database.users: -1 rows
DELETE FROM "users";
/*!40000 ALTER TABLE "users" DISABLE KEYS */;
INSERT INTO "users" ("id", "username", "password", "firstname", "lastname", "phonenumber", "email", "reg_date", "role", "is_logged") VALUES
	('1', 'sanjula', 'sanjula', 'sanjula', 'dealwis', '0775210469', 'sanjula@example.com', '2021-11-13 23:01:05', 'admin', 'false'),
	('2', 'user', 'user', 'user', 'silva', '0771234566', 'useer@gmaiol.com', '2021-11-14 10:08:49', 'user', 'false'),
	('e4513458-7074-453c-9b51-a3ecd06b1631', 'Dilshan Perera', 'dilshan', 'Dilshan', 'Perera', '0771234566', 'dilshan@gmail.com', '14.11.2021 13:16:24', 'user', 'false');
/*!40000 ALTER TABLE "users" ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
