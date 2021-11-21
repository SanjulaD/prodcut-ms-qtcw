productsCREATE TABLE "products" (
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
)
;