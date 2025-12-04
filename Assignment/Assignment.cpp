// PH67033_Kiều Đức Hải.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void kiem_tra_so_nguyen()
{
	char Tieptuc;
	do
	{
		system("cls");
		int soNguyen, i, dem = 0;
		printf("Nhap vao mot so: ");
		printf("\n");
		scanf_s("%d", &soNguyen);

		printf("So %d la so nguyen.\n", soNguyen);

		if (soNguyen < 2)
		{
			printf("So %d khong phai la so nguyen to.\n", soNguyen);
		}
		else
		{
			for (i = 1; i < soNguyen; i++)
			{
				if (soNguyen % i == 0);
				dem++;

			}
			if (dem == 2)
			{
				printf("So %d la so nguyen to.\n", soNguyen);
			}
			else
			{
				printf("So %d khong phai la so nguyen to.\n", soNguyen);
			}
		}
		int j = 0;
		int soChinhPhuong = 0;
		while (j * j <= soNguyen)
		{
			if (j * j == soNguyen)
			{
				soChinhPhuong = 1;
				break;
			}
			j++;
		}
		if (soChinhPhuong)
		{
			printf("So %d la so chinh phuong.\n", soNguyen);
		}
		else
		{
			printf("So %d khong phai la so chinh phuong.\n", soNguyen);
		}
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void tim_uoc_so_chung_va_boi_so_chung_cua_hai_so()
{
	char Tieptuc;
	do
	{
		system("cls");

		int x, y, a, b, ucln, bcnn;
		printf("Nhap so thu nhat: ");
		scanf_s("%d", &x);
		printf("Nhap so thu hai: ");
		scanf_s("%d", &y);

		a = x;
		if (a < 0)
		{
			a = -a;
		}
		b = y;
		if (b < 0)
		{
			b = -b;
		}
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		ucln = a;
		bcnn = (x * y) / ucln;
		printf("Uoc chung lon nhat cua %d va %d la : %d\n", x, y, ucln);
		printf("Boi chung nho nhat cua %d va %d la : %d\n", x, y, bcnn);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');

}

void tinh_tien_cho_quan_karaoke()
{
	char Tieptuc;
	do
	{
		system("cls");

		int gioBatDau, gioKetThuc, soGio;
		float tongTien, giamGia = 0;

		printf("Nhap so gio bat dau (12h-23h): ");
		scanf_s("%d", &gioBatDau);
		printf("Nhap so gio ket thuc (12h-23h: ");
		scanf_s("%d", &gioKetThuc);

		if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc >23 || gioKetThuc <= gioBatDau)
		{
			printf("Gio khong hop le ! Vui long nhap lai.\n");
		}
		soGio = gioKetThuc - gioBatDau;
		if (soGio <= 3)
		{
			tongTien = soGio * 150000;
		}
		else
		{
			tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
		}

		if (gioBatDau >= 14 && gioBatDau <= 17)
		{
			giamGia = tongTien * 0.1;
			tongTien = tongTien - giamGia;
		}
		printf("Tien phai tra: %lf dong\n", tongTien);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void tinh_tien_dien()
{

	char Tieptuc;
	do
	{
		system("cls");
		int kwh, tien = 0;
		printf("Nhap so kWh tieu thu trong thang: ");
		scanf_s("%d", &kwh);
		if (kwh < 0)
		{
			printf("So kWh khong hop le. Vui long nhap lai.\n");
			return;
		}
		if (kwh <= 50)
		{
			tien = kwh * 1678;
		}
		else if (kwh <= 100)
		{
			tien = 50 * 1678 + (kwh - 50) * 1734;
		}
		else if (kwh <= 200)
		{
			tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
		}
		else if (kwh <= 300)
		{
			tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
		}
		else if (kwh <= 400)
		{
			tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
		}
		else
		{
			tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
		}
		printf("So tien dien phai tra trong thang la: %d VND\n", tien);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void doi_tien()
{
	char Tieptuc;
	do
	{
		system("cls");
		int tien;
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTo[9] = { 0 };
		printf("Nhap so tien can doi: ");
		scanf_s("%d", &tien);
		for (int i = 0; i < 9; i++)
		{
			soTo[i] = tien / menhGia[i];
			tien = tien % menhGia[i];
		}
		printf("Ket qua doi tien :\n");
		for (int i = 0; i < 9; i++)
		{
			if (soTo[i] > 0)
				printf("%d to %d\n", soTo[i], menhGia[i]);
		}

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void tinh_lai_suat_vay_ngan_hang_tra_gop()
{

	char Tieptuc;
	do
	{
		system("cls");
		float soTienVay, laiSuat = 5, thoiGian = 12, tongTien, tienTraTheoThang;

		printf("Nhap so tien vay: ");
		scanf_s("%f", &soTienVay);

		laiSuat = laiSuat / 100;
		if (laiSuat == 0) {
			tienTraTheoThang = soTienVay / thoiGian;
		}
		else tienTraTheoThang = (soTienVay * laiSuat) / (1 - pow(1 + laiSuat, - thoiGian));
		tongTien = soTienVay * ((laiSuat / 100) + 1) * thoiGian;

		tongTien = tienTraTheoThang * thoiGian;

		printf("So tien vay: %.f VND\n", soTienVay);
		printf("Tien phai tra moi thang: %.2f VND\n", tienTraTheoThang);
		printf("Tong tien phai tra sau %.f thang vay la: %.f VND\n", thoiGian, tongTien);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void vay_tien_mua_xe()
{
	char Tieptuc;
	do
	{
		system("cls");

		float giaXe, tienDatCoc, soTienVay, laiSuat, thoiGianVay, tongTienPhaiTra = 0, tienTraTheoThang = 0;
		printf("Nhap gia xe: ");
		scanf_s("%f", &giaXe);
		printf("Nhap tien dat coc: ");
		scanf_s("%f", &tienDatCoc);
		printf("Nhap lai suat vay (theo thang): ");
		scanf_s("%f", &laiSuat);
		printf("Nhap thoi gian vay (thang): ");
		scanf_s("%f", &thoiGianVay);

		soTienVay = giaXe - tienDatCoc;
		float lai_suat_thang = laiSuat / 100;

		if (lai_suat_thang == 0)
		{
			tienTraTheoThang = soTienVay / thoiGianVay;
			tongTienPhaiTra = soTienVay;
		}
		else
		{
			tienTraTheoThang = (soTienVay * lai_suat_thang) / (1 - pow(1 + lai_suat_thang, - thoiGianVay));
			tongTienPhaiTra = tienTraTheoThang * thoiGianVay;
		}

		printf("So tien vay: %.f VND\n", soTienVay);
		printf("Tien phai tra moi thang: %.f VND\n", tienTraTheoThang);
		printf("Tong tien phai tra sau %.0f thang vay la: %.f VND\n", thoiGianVay, tongTienPhaiTra);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void sap_xem_thong_tin_sinh_vien()
{

	printf("Chuong trinh dang phat trien\n");

}

void xay_dung_game_FPOLY_LOTT()
{

	printf("Chuong trinh dang phat trien\n");

}

void tinh_toan_phan_so()
{
	char Tieptuc;
	do
	{
		system("cls");

		int a, b, c, d;

		printf("Nhap tu va mau cua phan so 1: ");
		scanf_s("%d%d", &a, &b);

		printf("Nhap tu va mau cua phan so 2: ");
		scanf_s("%d%d", &c, &d);

		int tongTu = a * d + c * b;
		int tongMau = b * d;
		printf("Tong: %d/%d\n", tongTu, tongMau);

		int hieuTu = a * d - c * b;
		int hieuMau = b * d;
		printf("Hieu: %d/%d\n", hieuTu, hieuMau);

		int tichTu = a * c;
		int tichMau = b * d;
		printf("Tich: %d/%d\n", tichTu, tichMau);

		int thuongTu = a * d;
		int thuongMau = b * c;
		printf("Thuong: %d/%d\n", thuongTu, thuongMau);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} 
	while (Tieptuc == 'y' || Tieptuc == 'Y');
}

int main()
{
	int chon;
	do
	{
		printf("===================================================================\n");
		printf("MENU Chuc Nang: \n");
		printf("1.Chuc nang so 1: Kiem tra so nguyen.\n");
		printf("2.Chuc nang so 2: Tim uoc so chung va boi so chung cua hai so.\n");
		printf("3.Chuc nang so 3: Tinh tien cho quan karaoke.\n");
		printf("4.Chuc nang so 4: Tinh tien dien.\n");
		printf("5.Chuc nang so 5: Doi tien\n");
		printf("6 Chuc nang so 6: Tinh lai suat vay ngan hang tra gop.\n");
		printf("7.Chuc nang so 7: Vay tien mua xe.\n");
		printf("8.Chuc nang so 8: Sap xep thong tin sinh vien.\n");
		printf("9.Chuc nang so 9: Xay dung game FPOLY LOTT.\n");
		printf("10.Chuc nang so 10: Tinh toan phan so.\n");
		printf("0. Thoat chuong trinh.\n");
		printf("===================================================================\n");
		printf("Vui long chon chuc nang tren MENU [0-10] : ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			kiem_tra_so_nguyen();
			break;
		case 2:
			tim_uoc_so_chung_va_boi_so_chung_cua_hai_so();
			break;
		case 3:
			tinh_tien_cho_quan_karaoke();
			break;
		case 4:
			tinh_tien_dien();
			break;
		case 5:
			doi_tien();
			break;
		case 6:
			tinh_lai_suat_vay_ngan_hang_tra_gop();
			break;
		case 7:
			vay_tien_mua_xe();
			break;
		case 8:
			sap_xem_thong_tin_sinh_vien();
			break;
		case 9:
			xay_dung_game_FPOLY_LOTT();
			break;
		case 10:
			tinh_toan_phan_so();
			break;
		case 0:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("Chuc nang ban chon khong hop le. Vui long chon lai!\n");
			break;
		}
	} while (chon != 0);
}