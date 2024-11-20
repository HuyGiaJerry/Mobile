-- Tạo cơ sở dữ liệu
CREATE DATABASE MobileShop;
GO

-- Sử dụng cơ sở dữ liệu MobileShop
USE MobileShop;
GO

-- Bảng Sản phẩm
CREATE TABLE SanPham (
    id INT PRIMARY KEY IDENTITY(1,1),
    tenSP NVARCHAR(100) NOT NULL,
    gia DECIMAL(18,2) NOT NULL,
    hangSX NVARCHAR(50) NOT NULL
);

-- Bảng Khách hàng
CREATE TABLE KhachHang (
    id INT PRIMARY KEY IDENTITY(1,1),
    tenKH NVARCHAR(100) NOT NULL,
    diachi NVARCHAR(255) NOT NULL,
    sdt NVARCHAR(15) NOT NULL
);

-- Bảng Người dùng
CREATE TABLE NguoiDung (
    id INT PRIMARY KEY IDENTITY(1,1),
    tendangnhap NVARCHAR(50) NOT NULL UNIQUE,
    matkhau NVARCHAR(255) NOT NULL
);

-- Bảng Đơn hàng
CREATE TABLE DonHang (
    id INT PRIMARY KEY IDENTITY(1,1),
    khachhangid INT NOT NULL,
    sanphamid INT NOT NULL,
    soluong INT NOT NULL,
    ngaymua DATE NOT NULL,
    CONSTRAINT FK_DonHang_KhachHang FOREIGN KEY (khachhangid) REFERENCES KhachHang(id) ON DELETE CASCADE,
    CONSTRAINT FK_DonHang_SanPham FOREIGN KEY (sanphamid) REFERENCES SanPham(id) ON DELETE CASCADE
);
GO
-- Thêm dữ liệu vào bảng Sản phẩm
INSERT INTO SanPham (tenSP, gia, hangSX)
VALUES 
('iPhone 14', 24000000, 'Apple'),
('Galaxy S23', 22000000, 'Samsung'),
('Xiaomi Mi 13', 18000000, 'Xiaomi'),
('OPPO Find X6', 17000000, 'OPPO');

-- Thêm dữ liệu vào bảng Khách hàng
INSERT INTO KhachHang (tenKH, diachi, sdt)
VALUES
('Nguyen Van A', '123 Hoang Dieu, Da Nang', '0905123456'),
('Tran Thi B', '456 Hai Ba Trung, Ha Noi', '0906123456'),
('Le Van C', '789 Nguyen Trai, Ho Chi Minh', '0907123456');

-- Thêm dữ liệu vào bảng Người dùng
INSERT INTO NguoiDung (tendangnhap, matkhau)
VALUES
('admin', 'admin123'),
('user1', 'password1'),
('user2', 'password2');

-- Thêm dữ liệu vào bảng Đơn hàng
INSERT INTO DonHang (khachhangid, sanphamid, soluong, ngaymua)
VALUES
(1, 1, 2, '2024-11-01'),
(2, 2, 1, '2024-11-05'),
(3, 3, 1, '2024-11-10'),
(1, 4, 1, '2024-11-15');
GO

SELECT * FROM SanPham;
SELECT * FROM KhachHang;
SELECT * FROM NguoiDung;
SELECT * FROM DonHang;

