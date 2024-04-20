# Cơ sở lý thuyết về SPI: 
## Tổng quan:
<br>
Giao tiếp ngoại vi nối tiếp hoặc SPI (Serial Peripheral Interface) là một chuẩn đồng bộ nối tiếp để truyền dữ liệu ở chế độ song công toàn phần (full – duplex) tức trong cùng một thời điểm có thể xảy ra đồng thời quá trình truyền và nhận.
Giao tiếp ngoại vi nối tiếp (SPI) là một loại giao thức kiểu Master – Slave cung cấp một giao diện chi phí đơn giản và chi phí thấp giữa vi điều khiển và các thiết bị ngoại vi của nó.


## Lịch sử: 
<br>
SPI hoặc giao tiếp ngoại vi nối tiếp được Motorola phát triển vào những năm 1980 như một giao diện tiêu chuẩn, chi phí thấp và đáng tin cậy giữa vi điều khiển (Vi điều khiển của Motorola lúc đầu) và các IC ngoại vi của nó.


## Đặc điểm: 
<br>
Trong giao thức SPI, các thiết bị được kết nối trong một mối quan hệ Master – Slave trong một giao diện đa điểm. Trong loại giao diện này, một thiết bị được coi là Master của bus (thường là một vi điều khiển) và tất cả các thiết bị khác (IC ngoại vi hoặc thậm chí các vi điều khiển khác) đều được coi là Slave.
Trong giao thức SPI, có thể chỉ có một thiết bị Master nhưng nhiều thiết bị Slave.

## Ưu điểm: 
<br>
-Dữ liệu có thể được truyền liên tục mà không bị gián đoạn vì không có bit bắt đầu và bit dừng.
-Tốc độ truyền dữ liệu cao hơn I2C và UART
-Các đường MISO và MOSI riêng biệt nên dữ liệu có thể được truyền và nhận dữ liệu cùng một lúc.


## Ứng dụng: 
<br>
Thường được sử dụng trong các module thẻ SD, module đầu đọc thẻ RFID, bộ phát/thu không dây 2.4 GHz
Giao thức SPI được tích hợp trong một số loại thiết bị như:
<br>
- Các bộ chuyển đổi (ADC và DAC)
- Các loại bộ nhớ (SD Card , MMC , EEPROM , Flash)
- Các loại IC thời gian thực
- Các loại cảm biến (nhiệt độ, áp suất…) và một số loại khác như: bộ trộn tín hiệu, LCD, Graphic LCD, video game controller,…Lịch sử: SPI hoặc giao tiếp ngoại vi nối tiếp được Motorola phát triển vào những năm 1980 như một giao diện tiêu chuẩn, chi phí thấp và đáng tin cậy giữa vi điều khiển (Vi điều khiển của Motorola lúc đầu) và các IC ngoại vi của nó.


## Đặc điểm: 
Trong giao thức SPI, các thiết bị được kết nối trong một mối quan hệ Master – Slave trong một giao diện đa điểm. Trong loại giao diện này, một thiết bị được coi là Master của bus (thường là một vi điều khiển) và tất cả các thiết bị khác (IC ngoại vi hoặc thậm chí các vi điều khiển khác) đều được coi là Slave.
Trong giao thức SPI, có thể chỉ có một thiết bị Master nhưng nhiều thiết bị Slave.

## Ưu điểm: 
-Dữ liệu có thể được truyền liên tục mà không bị gián đoạn vì không có bit bắt đầu và bit dừng.
-Tốc độ truyền dữ liệu cao hơn I2C và UART
-Các đường MISO và MOSI riêng biệt nên dữ liệu có thể được truyền và nhận dữ liệu cùng một lúc.


## Ứng dụng: 
Thường được sử dụng trong các module thẻ SD, module đầu đọc thẻ RFID, bộ phát/thu không dây 2.4 GHz
Giao thức SPI được tích hợp trong một số loại thiết bị như:
- Các bộ chuyển đổi (ADC và DAC)
- Các loại bộ nhớ (SD Card , MMC , EEPROM , Flash)
- Các loại IC thời gian thực
- Các loại cảm biến (nhiệt độ, áp suất…) và một số loại khác như: bộ trộn tín hiệu, LCD, Graphic LCD, video game controller,…
# Định hướng phát thiết kế
## Các module bên trong
- CONTROL_COMBINATION : Tổng hợp lệnh, trạng thái của các khối và điều khiển hoạt động các các khối (module) bên trong.
- STATUS_COMBINATION : Tổng hợp trạng thái và gởi về cho CPU.
- SENDER : Gởi từng byte dữ liệu theo từng bit
- RECEIVER : nhận từng bit dữ liệu
- SENDER_BUFFER/RECEIVER_BUFFER : bộ đệm gởi và nhận.
