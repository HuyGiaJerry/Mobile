# Nguyễn Gia Huy D17CNPM4 - MSV: 22810310268 

Img bai 1 (31/12/2024) : ![image](https://github.com/user-attachments/assets/febecfc2-d27f-4eff-b423-4ce473ec699a)

Img bai custom component (7/1/2025) : ![image](https://github.com/user-attachments/assets/a1cd5c1d-6815-4663-897c-d0697dbafe63)

Img bai FlatList (7/1/2025) : ![image](https://github.com/user-attachments/assets/80848fcf-b2dd-4cb0-9297-3a42a15ff092)

Img bai Section (14/1/2025) : ![image](https://github.com/user-attachments/assets/90728512-47bc-4684-8bcb-df4dc0bc9619)

1. Mục đích sử dụng:
FlatList:

Dùng để hiển thị danh sách các mục đơn giản, không phân nhóm.
Phù hợp khi cần hiển thị một danh sách tuyến tính các mục, như danh sách sản phẩm, danh bạ điện thoại, danh sách tin nhắn, v.v.
Sử dụng khi mỗi mục trong danh sách có cấu trúc giống nhau.
SectionList:

Dùng để hiển thị danh sách các mục được phân nhóm.
Thích hợp khi cần hiển thị danh sách có cấu trúc phức tạp hơn với các nhóm và tiêu đề nhóm, như danh sách mục lục, danh sách thành viên theo phòng ban, danh sách bài hát theo album, v.v.
Sử dụng khi có nhiều nhóm mục với tiêu đề nhóm khác nhau.
2. Cấu trúc dữ liệu:
FlatList:

Nhận một mảng đơn giản của các đối tượng làm dữ liệu đầu vào.
Mỗi đối tượng trong mảng đại diện cho một mục trong danh sách.
const products = [
  { id: '1', name: 'Product A', price: '10.00' },
  { id: '2', name: 'Product B', price: '15.00' },
  { id: '3', name: 'Product C', price: '20.00' },
];
Dữ liệu đơn giản và trực tiếp hơn SectionList.
SectionList:

Nhận một mảng các đối tượng, mỗi đối tượng đại diện cho một nhóm và có thuộc tính title và data.
data là một mảng chứa các mục của nhóm đó.
const groupedProducts = [
  { title: 'Category A', data: ['Product A1', 'Product A2', 'Product A3'] },
  { title: 'Category B', data: ['Product B1', 'Product B2'] },
  { title: 'Category C', data: ['Product C1', 'Product C2', 'Product C3'] },
];
Dữ liệu phức tạp hơn và có tổ chức theo nhóm.
3. Hiệu năng:
FlatList:

Được tối ưu hóa để hiển thị danh sách dài một cách hiệu quả bằng cách chỉ render các mục trong tầm nhìn và tải thêm khi cuộn.
Sử dụng cơ chế phân trang (pagination) để cải thiện hiệu năng.
Thích hợp cho danh sách có hàng nghìn mục mà không gây ảnh hưởng lớn đến hiệu năng.
SectionList:

Cũng được tối ưu hóa cho danh sách dài, nhưng có thêm phức tạp do phải quản lý các nhóm và tiêu đề nhóm.
Có cơ chế tương tự để render các mục trong tầm nhìn và tải thêm khi cần.
Khi sử dụng với danh sách phân nhóm, SectionList cung cấp trải nghiệm người dùng tốt hơn nhờ các tiêu đề nhóm và khả năng cuộn mượt mà giữa các nhóm.
4. Tính dễ sử dụng:
FlatList:

Dễ sử dụng cho các danh sách đơn giản không phân nhóm.
Chỉ cần cung cấp dữ liệu dưới dạng một mảng và khai báo cách render từng mục.
Ví dụ:
<FlatList
  data={products}
  renderItem={({ item }) => (
    <View>
      <Text>{item.name}</Text>
      <Text>{item.price}</Text>
    </View>
  )}
  keyExtractor={item => item.id}
/>
SectionList:

Cần cấu hình nhiều hơn do phải quản lý các nhóm và tiêu đề nhóm.
Phức tạp hơn FlatList do cần xử lý nhiều nhóm và mục trong từng nhóm.
Ví dụ:
<SectionList
  sections={groupedProducts}
  renderItem={({ item }) => <Text>{item}</Text>}
  renderSectionHeader={({ section: { title } }) => <Text>{title}</Text>}
  keyExtractor={(item, index) => item + index}
/>
Tóm lại, FlatList là lựa chọn tốt khi bạn cần hiển thị một danh sách tuyến tính đơn giản, trong khi SectionList phù hợp hơn cho các danh sách có cấu trúc phân nhóm phức tạp. Cả hai đều cung cấp hiệu năng tốt và có cơ chế render hiệu quả, nhưng FlatList có thể dễ sử dụng hơn nếu danh sách của bạn không phân nhóm.

Img bai 4 : State 11/2/2025 
![image](https://github.com/user-attachments/assets/0ad8edde-5020-4d47-b913-2471329bf08c)

Img bai 5 : OnTap State - ValidateForm 18/2/2025
![image](https://github.com/user-attachments/assets/b2691d7d-2c7c-4669-badf-ece6b5042536)

Img bai 6 : Navigation 25/2/2025
![nav_1](https://github.com/user-attachments/assets/0d81a4ca-f25d-4f98-8a7f-4cf66470d8f7)
![nav_2](https://github.com/user-attachments/assets/69974526-8081-4b6e-abeb-3e4c2da65ae4)

Img Bai 7 : Bottom Tab + Stack Tab + Context 4/3/2025
![btt1](https://github.com/user-attachments/assets/2b99ab55-d354-4ccd-8e9b-370e17e3610c)
![btt2](https://github.com/user-attachments/assets/e6c5111c-22d7-404c-856c-d924ec5b54a3)
![btt3](https://github.com/user-attachments/assets/16296ad1-9698-4ce6-a6bf-c4ff5e9c025c)

Img KiemTra 1 : Design 2 screen
![image](https://github.com/user-attachments/assets/67f43ee1-52af-45a4-99e1-a43002d2389d)
![image](https://github.com/user-attachments/assets/68e6e276-708e-451d-978a-b4fe0fd9a863)


Img Bai 9 : AsyncStorage + Stack + Bottom Tab 18/3/2025
![image](https://github.com/user-attachments/assets/6e5c0ae6-86ca-4cdf-8d9f-0aeb35010e24)
![image](https://github.com/user-attachments/assets/6b450844-ac0f-442e-9d1f-d214c7b1f653)
![image](https://github.com/user-attachments/assets/1bac1524-0dfc-48dd-b2e6-bce994be6007)

Img BaiTH 1 : 28/3/2025 Restaurant App 

![image](https://github.com/user-attachments/assets/13bee893-bb4f-4179-9ed0-f6fa14872fcc)
![image](https://github.com/user-attachments/assets/1009a1a9-cbe5-45d9-9e88-b2e7a59f00a4)
![image](https://github.com/user-attachments/assets/f3c60009-6856-4443-80ef-a923db671747)
![image](https://github.com/user-attachments/assets/c7d6a544-0075-4f1a-ae45-7c0d7f653d93)
![image](https://github.com/user-attachments/assets/91e01c74-9da9-4b54-a6f2-f0347eb8c130)

Img BaiTH 2 : 31/3/2025 Nectar App 

![image](https://github.com/user-attachments/assets/8d5da639-2ab4-4420-81ec-c7e91e8602ff)
![image](https://github.com/user-attachments/assets/27b63bdc-0c90-496b-9f8b-d0f858a18b68)

Img Bai 10 : AsyncStorage 1/4/2025

![image](https://github.com/user-attachments/assets/a83fc7af-70f0-4889-9fb0-23d384e03fad)
![image](https://github.com/user-attachments/assets/605d4410-d631-4a77-977c-64feb7fda3a1)
![image](https://github.com/user-attachments/assets/6dd1b492-9ebd-499d-923b-ac5f4940f2ea)

Img TH 3 : 2/4/2025 Nectar App P2 

![a](https://github.com/user-attachments/assets/e90bac66-cefc-4e39-a4e2-eadabdb76a9e)
![b](https://github.com/user-attachments/assets/e4ba79eb-0a12-4f2a-878c-25e07d75c3af)
![c](https://github.com/user-attachments/assets/fbae9525-a58f-43cf-adc2-4197ed12227b)

Img TH 4 : Nectar App P3

![img1](https://github.com/user-attachments/assets/c420fc79-3923-4b09-835c-cc66988dbaf4)
![img2](https://github.com/user-attachments/assets/735ae458-78a0-41dd-b2ac-9473c54c972c)
![img3](https://github.com/user-attachments/assets/15a6472b-f70d-4421-978c-f0bbb1cd3639)
![img4](https://github.com/user-attachments/assets/2ad7c74a-86d1-4205-b6f6-5eeb6fc5eec5)









