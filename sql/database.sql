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
INSERT INTO "products" ("p_id", "p_name", "p_description", "p_quantity", "p_purchase_price", "p_sales_price", "added_date", "user_id") VALUES
	('1', 'Rice', 'rice description', '10', '1200', '1500', '2012-12-13', '2'),
	('2', 'Bath', 'new description', '15', '1800', '2500', '2012-12-13', '3'),
	('9393d3ef-882b-460c-a878-2e8e8ef6f243', 'sasa', 'asasa', '4', 'asdasd', 'asdasd', '21.11.2021 12:10:17', '2'),
	('d59de13e-3f6e-4958-b83e-8d787b63611c', 'ddd', 'ddd', '3', 'ddd', 'ddd', '21.11.2021 12:12:41', '2'),
	('69de8bcd-ed01-4fa1-9e60-ae788cae8ea9', 'Masala', 'new description added', '2', '800', '1200', '23.11.2021 14:23:37', '-1655714826');
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
	('3', 'Dilshan Perera', 'dilshan', 'Dilshan', 'Perera', '0771234566', 'dilshan@gmail.com', '14.11.2021 13:16:24', 'user', 'false'),
	('2639252470', 'chamath', 'chamath', 'Chamath', 'Silva', '0771234455', 'chamath@example.com', '23.11.2021 14:21:08', 'user', 'false');
/*!40000 ALTER TABLE "users" ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
