CREATE DATABASE QuanLyKhoHang
GO
USE QuanLyKhoHang
GO

CREATE TABLE [WareHouse] (
  [WareHouseId] int IDENTITY(1,1) PRIMARY KEY,
  [WareHouseName] nvarchar(100) UNIQUE,
  [Location] nvarchar(100)
)
GO

CREATE TABLE [Product] (
  [ProductId] int IDENTITY(1,1) PRIMARY KEY,
  [ProductName] nvarchar(100) UNIQUE,
  [Unit] nvarchar(100),
  [Price] float,
  [Description] nvarchar(100),
  [CreateAt] date,
  [CategoryId] int
)
GO

CREATE TABLE [Inventory] (
  [InventoryId] int IDENTITY(1,1) PRIMARY KEY,
  [ProductId] int,
  [WareHouseId] int,
  [ShelfId] int,
  [Quantity] int
)
GO

CREATE TABLE [Shelf] (
  [ShelfId] int IDENTITY(1,1) PRIMARY KEY,
  [Location] nvarchar(100),
  [WareHouseId] int
)
GO

CREATE TABLE [Transaction] (
  [TransactionId] int IDENTITY(1,1) PRIMARY KEY,
  [SupplierId] int,
  [BatchNumber] float UNIQUE,
  [TransactionType] nvarchar(100),
  [CreateDate] date,
  [AccountId] int,
  [Total] float
)
GO

CREATE TABLE [TransactionDetail] (
  [TransactionDetailId] int IDENTITY(1,1) PRIMARY KEY,
  [TransactionId] int,
  [WareHouseId] int,
  [ShelfId] int,
  [ProductId] int,
  [Quantity] int,
  [Total] float,
  [Status] bit  -- Corrected from bool to bit
)
GO

CREATE TABLE [Supplier] (
  [SupplierId] int IDENTITY(1,1) PRIMARY KEY,
  [SupplierName] nvarchar(100) UNIQUE,
  [PhoneNumber] nvarchar(20) UNIQUE,
  [Address] nvarchar(50) UNIQUE
)
GO

CREATE TABLE [Account] (
  [AccountId] int IDENTITY(1,1) PRIMARY KEY,
  [AccountName] nvarchar(100),
  [Username] varchar(50) UNIQUE,
  [Password] varchar(50),
  [Role] nvarchar(100),
  [Email] varchar(100) UNIQUE,
  [Phone] varchar(100) UNIQUE
)
GO

CREATE TABLE [Category] (
  [CategoryId] int IDENTITY(1,1) PRIMARY KEY,
  [CategoryName] nvarchar(100) UNIQUE
)
GO

ALTER TABLE [Product] ADD FOREIGN KEY ([CategoryId]) REFERENCES [Category] ([CategoryId])
GO

ALTER TABLE [Inventory] ADD FOREIGN KEY ([ProductId]) REFERENCES [Product] ([ProductId])
GO

ALTER TABLE [Inventory] ADD FOREIGN KEY ([WareHouseId]) REFERENCES [WareHouse] ([WareHouseId])
GO

ALTER TABLE [Inventory] ADD FOREIGN KEY ([ShelfId]) REFERENCES [Shelf] ([ShelfId])
GO

ALTER TABLE [Shelf] ADD FOREIGN KEY ([WareHouseId]) REFERENCES [WareHouse] ([WareHouseId])
GO

ALTER TABLE [Transaction] ADD FOREIGN KEY ([SupplierId]) REFERENCES [Supplier] ([SupplierId])
GO

ALTER TABLE [Transaction] ADD FOREIGN KEY ([AccountId]) REFERENCES [Account] ([AccountId])
GO

ALTER TABLE [TransactionDetail] ADD FOREIGN KEY ([TransactionId]) REFERENCES [Transaction] ([TransactionId])
GO

ALTER TABLE [TransactionDetail] ADD FOREIGN KEY ([WareHouseId]) REFERENCES [WareHouse] ([WareHouseId])
GO

ALTER TABLE [TransactionDetail] ADD FOREIGN KEY ([ShelfId]) REFERENCES [Shelf] ([ShelfId])
GO

ALTER TABLE [TransactionDetail] ADD FOREIGN KEY ([ProductId]) REFERENCES [Product] ([ProductId])
GO

-- Create indexes
CREATE INDEX idx_Product_CategoryId ON Product (CategoryId);
GO

CREATE INDEX idx_Inventory_ProductId ON Inventory (ProductId);
CREATE INDEX idx_Inventory_WareHouseId ON Inventory (WareHouseId);
CREATE INDEX idx_Inventory_ShelfId ON Inventory (ShelfId);
GO

CREATE INDEX idx_Shelf_WareHouseId ON Shelf (WareHouseId);
GO

CREATE INDEX idx_Transaction_SupplierId ON [Transaction] (SupplierId);
CREATE INDEX idx_Transaction_AccountId ON [Transaction] (AccountId);
GO

CREATE INDEX idx_TransactionDetail_TransactionId ON TransactionDetail (TransactionId);
CREATE INDEX idx_TransactionDetail_WareHouseId ON TransactionDetail (WareHouseId);
CREATE INDEX idx_TransactionDetail_ShelfId ON TransactionDetail (ShelfId);
CREATE INDEX idx_TransactionDetail_ProductId ON TransactionDetail (ProductId);
GO

CREATE INDEX idx_Account_Username ON Account (Username);
GO

CREATE INDEX idx_Supplier_PhoneNumber ON Supplier (PhoneNumber);
GO

INSERT INTO [Category] ([CategoryName]) VALUES
(N'Điện Tử'),
(N'Nội Thất'),
(N'Quần áo'),
(N'Thực Phẩm'),
(N'Văn Phòng Phẩm'),
(N'Thể Thao'),
(N'Mỹ Phẩm'),
(N'Đồ Chơi')

INSERT INTO [Product] ([ProductName], [Unit], [Price], [Description], [CreateAt], [CategoryId]) VALUES
(N'Laptop Asus A15', N'Chiếc', 999.99, 'High-performance laptop', GETDATE(), 1),
(N'Sofa A34hn', N'Chiếc', 450.00, 'Comfortable sofa', GETDATE(), 2),
(N'Áo sơ mi kẻ sọc', N'Chiếc', 19.99, 'Cotton t-shirt', GETDATE(), 3),
(N'Quần dài thiết kế man', N'Chiếc', 29.99, 'Long nice trouser', GETDATE(), 3),
(N'Chocolate', N'Hộp', 5.99, 'Dark chocolate', GETDATE(), 4),
(N'Novel', N'Cuốn', 15.00, 'Fiction novel', GETDATE(), 5),
(N'Notebook', N'Chiếc', 2.00, 'A4 size notebook', GETDATE(), 5),
(N'Basketball', N'Chiếc', 20.00, 'Official size basketball', GETDATE(), 6),
(N'Dầu gội thái dương', N'Chai', 8.99, 'Herbal shampoo', GETDATE(), 7),
(N'Lego Asuama hoàng đế', N'Hộp', 12.00, 'Great Emperor', GETDATE(), 8),
(N'Sangsum Galaxy s5', N'Chiếc', 275.00, 'Battery 10000 Mah', GETDATE(), 1)

INSERT INTO [WareHouse] ([WareHouseName], [Location]) VALUES
('Central Warehouse', N'Hà Nội'),
('East Warehouse', N'Hải Phòng'),
('West Warehouse', N'Lào Cai'),
('South Warehouse', N'Sài Gòn'),
('North Warehouse', N'Thanh Hóa')

INSERT INTO [Shelf] ([Location], [WareHouseId]) VALUES
(N'A1', 1),
(N'A2', 1),
(N'B1', 1),
(N'B2', 2),
(N'C1', 3),
(N'C2', 3),
(N'D1', 4),
(N'D2', 4),
(N'E1', 3),
(N'E2', 5)

INSERT INTO [Inventory] ([ProductId], [WareHouseId], [ShelfId], [Quantity]) VALUES
(1, 1, 1, 30),   
(2, 1, 2, 15),    
(3, 2, 3, 50),    
(4, 3, 4, 40),    
(5, 3, 5, 100),   
(6, 4, 6, 75),    
(11, 5, 9, 25),   
(7, 2, 1, 200),    
(8, 1, 2, 60),     
(9, 2, 3, 150),   
(10, 3, 4, 90),  
(5, 3, 5, 110),   
(6, 4, 6, 80),    
(2, 5, 7, 30),    
(3, 4, 8, 60),    
(1, 1, 9, 40),    
(4, 5, 10, 45)  


INSERT INTO [Supplier] ([SupplierName], [PhoneNumber], [Address]) VALUES
(N'ABC Electronics', '0346511228', N'123 Nam từ liêm, Hà nội'),
(N'Best Furniture', '0996666666', N'34 Chí An, Nghệ An'),
(N'Cloth & Co', '0343444999', N'18 Trần Hữu, Thái Bình'),
(N'Gourmet Foods', '0345678666', N'212 Phố Paris, Sài Gòn'),
(N'Book World', '0889999888', N'33 Đại lộ 12, Phú Thọ')


INSERT INTO [Account] ([AccountName], [Username], [Password], [Role], [Email], [Phone]) VALUES
(N'Jerry Nguyễn', 'huygia', CONVERT(VARCHAR(40), HASHBYTES('SHA1', '12345'), 2), N'Manager', 'huyfin2004@gmail.com', '0375377697'),
(N'Panda Huyền', 'huyentrinh', CONVERT(VARCHAR(40), HASHBYTES('SHA1', 'huyen123'), 2), N'Manager', 'huyentrinh123@gmail.com', '0555567888'),
(N'Alice Đặng', 'alice123', CONVERT(VARCHAR(40), HASHBYTES('SHA1', '99999'), 2), N'Customer', 'AliceDang11@gmail.com', '0123456789'),
(N'Nam Nguyễn', 'NamHell222', CONVERT(VARCHAR(40), HASHBYTES('SHA1', 'namnguyen11'), 2), N'Staff', 'namblue2000@gmail.com', '0377665512'),
(N'Hà Tiny', 'hatran666', CONVERT(VARCHAR(40), HASHBYTES('SHA1', 'pass456'), 2), N'Staff', 'hatiny99@gmail.com', '0755678999')

INSERT INTO [Transaction] ([SupplierId], [BatchNumber], [TransactionType], [CreateDate], [AccountId], [Total]) VALUES
( 1, 1001, N'Export', GETDATE(), 1, 5000.00),
( 2, 1002, N'Import', GETDATE(), 2, 2000.00),
( 3, 1003, N'Export', GETDATE(), 3, 1500.00),
( 4, 1004, N'Import', GETDATE(), 4, 3000.00),
( 5, 1005, N'Export', GETDATE(), 5, 4500.00),
( 1, 1006, N'Import', GETDATE(), 1, 2750.00),
( 2, 1007, N'Export', GETDATE(), 2, 1200.00),
( 3, 1008, N'Import', GETDATE(), 3, 3200.00),
( 4, 1009, N'Export', GETDATE(), 4, 2100.00),
( 5, 1010, N'Import', GETDATE(), 5, 4800.00)


INSERT INTO [TransactionDetail] ([TransactionId], [WareHouseId], [ShelfId], [ProductId], [Quantity], [Total], [Status]) VALUES
( 1, 1, 1, 1, 5, 2500.00, 1),   -- Transaction 1 (Laptop Asus A15)
( 1, 1, 2, 2, 2, 900.00, 1),   -- Transaction 1 (Sofa A34hn)
( 1, 2, 3, 3, 10, 199.90, 0),  -- Transaction 1 (Áo sơ mi kẻ sọc)
( 2, 1, 4, 4, 5, 444, 1),   -- Transaction 2 (Quần dài thiết kế man)
( 2, 2, 5, 5, 20, 119.80, 1),  -- Transaction 2 (Chocolate)
( 2, 3, 6, 6, 8, 120.00, 0),   -- Transaction 2 (Novel)
( 3, 4, 7, 7, 15, 30.00, 0),   -- Transaction 3 (Notebook)
( 3, 1, 2, 8, 3, 60.00, 1),    -- Transaction 3 (Basketball)
( 4, 2, 3, 9, 10, 89.90, 1),   -- Transaction 4 (Dầu gội thái dương)
( 4, 3, 4, 10, 5, 60.00, 0),  -- Transaction 4 (Lego Asuama hoàng đế)
( 5, 4, 5, 1, 8, 799.00, 1),  -- Transaction 5 (Laptop Asus A15)
( 5, 1, 6, 2, 10, 450.00, 1), -- Transaction 5 (Sofa A34hn)
( 6, 2, 7, 3, 6, 119.0, 0),  -- Transaction 6 (Áo sơ mi kẻ sọc)
( 6, 3, 8, 4, 5, 149.00, 1),  -- Transaction 6 (Quần dài thiết kế man)
( 7, 4, 9, 5, 20, 119.80, 1), -- Transaction 7 (Chocolate)
( 7, 1, 10, 6, 7, 105.00, 0), -- Transaction 7 (Novel)
( 8, 3, 1, 7, 10, 200.00, 1), -- Transaction 8 (Notebook)
( 8, 2, 2, 8, 6, 120.00, 0),  -- Transaction 8 (Basketball)
( 1, 4, 3, 9, 5, 50, 1),   -- Transaction 9 (Dầu gội thái dương)
( 9, 1, 4, 10, 7, 385.00, 0);   -- Transaction 9 (Lego Asuama hoàng đế)


Select * from Account 

Select * from [Transaction] 

Select * from TransactionDetail 

Select * from Product

Select * from Inventory 

Select * from Supplier

Select * from Category 

Select * from WareHouse

Select * from Shelf



