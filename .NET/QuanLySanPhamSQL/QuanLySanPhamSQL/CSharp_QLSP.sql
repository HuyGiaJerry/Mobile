CREATE DATABASE CSharp_QLSP 
GO
USE CSharp_QLSP
GO

CREATE TABLE SanPham
(
	MaSP		Varchar(10) PRIMARY KEY,
	TenSP		NVarchar(100) NOT NULL,
	SoLuong     int NOT NULL,
	Sdt			varchar(50)
)


INSERT INTO SanPham (MaSP, TenSP, SoLuong, Sdt)
VALUES
('SP01', N'Dien Thoai', 10, '0123456789'),
('SP02', N'May Tinh', 15, '0987654321'),
('SP03', N'Sach Vo', 20, '0123456789'),
('SP04', N'Dien Tu', 5, '0123456789'),
('SP05', N'AAACCC', 30, '0123456789'),
('SP06', N'BBBB', 50, '0987654321');
GO
