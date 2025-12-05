// PH67033_Kiều Đức Hải.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void kiemTraSoNguyen()
{
	char Tieptuc;
	do
	{
		system("cls");
		int soNguyen, i, dem = 0;
		printf("============================================\n");
		printf("	CHUC NANG 1: KIEM TRA SO NGUYEN.\n");
		printf("============================================\n");
		printf(" - Nhap vao mot so: ");
		scanf_s("%d", &soNguyen);

		printf(" => So %d la so nguyen.\n", soNguyen);

		if (soNguyen < 2)
		{
			printf(" => So %d khong phai la so nguyen to.\n", soNguyen);
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
				printf(" => So %d la so nguyen to.\n", soNguyen);
			}
			else
			{
				printf(" => So %d khong phai la so nguyen to.\n", soNguyen);
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
			printf(" => So %d la so chinh phuong.\n", soNguyen);
		}
		else
		{
			printf(" => So %d khong phai la so chinh phuong.\n", soNguyen);
		}
		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void timUocSoChungVaBoiSoChungCuaHaiSo()
{
	char Tieptuc;
	do
	{
		system("cls");

		int x, y, a, b, ucln, bcnn;
		printf("================================================================\n");
		printf("	CHUC NANG 2: TIM UOC CHUNG VA BOI CHUNG CUA 2 SO.\n");
		printf("================================================================\n");
		printf(" - Nhap so thu nhat: ");
		scanf_s("%d", &x);
		printf(" - Nhap so thu hai: ");
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
		printf(" => Uoc chung lon nhat cua %d va %d la : %d\n", x, y, ucln);
		printf(" => Boi chung nho nhat cua %d va %d la : %d\n", x, y, bcnn);

		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");

}

void tinhTienChoQuanKaraoke()
{
	char Tieptuc;
	do
	{
		system("cls");

		int gioBatDau, gioKetThuc, soGio;
		float tongTien, giamGia = 0;
		printf("==================================================\n");
		printf("	CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE\n");
		printf("==================================================\n");
		printf(" - Nhap so gio bat dau (12h-23h): ");
		scanf_s("%d", &gioBatDau);
		printf(" - Nhap so gio ket thuc (12h-23h: ");
		scanf_s("%d", &gioKetThuc);

		if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc >23 || gioKetThuc <= gioBatDau)
		{
			printf(" => Gio khong hop le ! Vui long nhap lai.\n");
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
		printf(" => Tien phai tra: %lf dong\n", tongTien);

		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void tinhTienDien()
{

	char Tieptuc;
	do
	{
		system("cls");
		int kwh, tien = 0;
		printf("=======================================\n");
		printf("	CHUC NANG 4: TINH TIEN DIEN\n");
		printf("=======================================\n");
		printf(" - Nhap so kWh tieu thu trong thang: ");
		scanf_s("%d", &kwh);
		if (kwh < 0)
		{
			printf(" => So kWh khong hop le. Vui long nhap lai.\n");
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
		printf(" => So tien dien phai tra trong thang la: %d VND\n", tien);

		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void doiTien()
{
	char Tieptuc;
	do
	{
		system("cls");
		int tien;
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTo[9] = { 0 };
		printf("==================================\n");
		printf("	CHUC NANG 5: DOI TIEN\n");
		printf("==================================\n");
		printf(" - Nhap so tien can doi: ");
		scanf_s("%d", &tien);
		for (int i = 0; i < 9; i++)
		{
			soTo[i] = tien / menhGia[i];
			tien = tien % menhGia[i];
		}
		printf(" => Ket qua doi tien :\n");
		for (int i = 0; i < 9; i++)
		{
			if (soTo[i] > 0)
				printf(" => %d to %d\n", soTo[i], menhGia[i]);
		}

		printf("==================================\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void tinhLaiSuatVayNganHangTraGop()
{

	char Tieptuc;
	do
	{
		system("cls");
		int i, tienVay;

		printf("================================================================\n");
		printf("	CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG TRA GOP\n");
		printf("================================================================\n");
		printf(" - Nhap so tien vay: ");
		scanf_s("%d", &tienVay);

		tienVay = tienVay * 1000000;

		printf(" - Tien vay: %d dong\n", tienVay);
		printf(" - Lai suat: 5%%/thang\n");
		printf(" - Ky han: 12 thang\n\n");

		printf("Ky han | Lai phai tra | Goc phai tra | Tien phai tra | Con lai\n");
		printf("-------|--------------|--------------|---------------|-------------\n");

		int conLai = tienVay;

		for (i = 1; i <= 12; i++) 
		{
			int laiThang = conLai * 5 / 100;
			int gocThang = tienVay / 12;
			int tongThang = laiThang + gocThang;
			conLai = conLai - gocThang;

			printf("  %2d   |  %9d   |  %9d   |  %10d   | %10d\n", i, laiThang, gocThang, tongThang, conLai);
		}

		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void vayTienMuaXe()
{
	char Tieptuc;
	do
	{
		system("cls");

		int phanTramTraTruoc, tienVay, gocMoiThang, tienTraLanDau;
		int i;

		printf("======================================\n");
		printf("	CHUC NANG 7: VAY TIEN MUA XE\n");
		printf("======================================\n");
		printf(" - Gia xe: 500 trieu VND\n");
		printf(" - Thoi gian vay: 24 nam\n");
		printf(" - Lai suat: 7,2%%/ nam\n");

		printf(" - Nhap so phan tram vay toi da: ");
		scanf_s("%d", &phanTramTraTruoc);

		if (phanTramTraTruoc < 0 || phanTramTraTruoc > 100)
		{
			printf(" => So phan tram khong hop le!\n");
		}

		tienVay = 500000000 * (100 - phanTramTraTruoc) / 100;
		tienTraLanDau = 500000000 * phanTramTraTruoc / 100;
		gocMoiThang = tienVay / 288;

		printf(" => So tien tra truoc lan dau: %d dong\n", tienTraLanDau);
		printf(" => So tien vay ngan hang	 : %d dong\n", tienVay);
		printf("Thang | Lai phai tra | Goc phai tra | Tong phai tra\n");
		printf("------|--------------|--------------|--------------\n");
		
		int conLai = tienVay;
		for ( i = 0; i < 288; i++)
		{
			int laiThang = conLai * 72 / 1200;
			int tongThang = laiThang + gocMoiThang;
			printf("%4d  | %10d  | %10d\n", i, laiThang, gocMoiThang, tongThang);
			conLai = conLai - gocMoiThang;
			if (i == 12)
			{
				printf("........................\n");
				i = 288 - 1;
			}
		}

		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void sapXepThongTinSinhVien()
{

	printf("Chuong trinh dang phat trien\n");

}

void xayDungGame_FPOLY_LOTT()
{
	char Tieptuc;
	do
	{
		system("cls");
		int so1, so2, may1, may2, trung = 0;
		srand(time(NULL));
		may1 = 1 + rand() % 15;
		do
		{
			may2 = 1 + rand() % 15;
		} while (may2 = may1);
		printf("============================================\n");
		printf("	CHUC NANG 9: GAME FPOLY LOTT\N");
		printf("============================================\n");
		printf(" - Nhap so thu nhat (1-15): ");
		scanf_s("%d", &so1);
		printf(" - Nhap so thu hai (1-15): ");
		scanf_s("%d", &so2);

		if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15)
		{
			printf(" => So khong hop le!\n");
			return;
		}

		if (so1 == may1 || so1 == may2) trung++;
		if (so2 == may1 || so2 == may2) trung++;

		printf("\n");
		printf("====================================\n");
		printf("         KET QUA XO SO\n");
		printf("====================================\n");
		printf("So may man hom nay: %02d va %02d\n", may1, may2);
		printf("Ban da chon       : %02d va %02d\n", so1, so2);
		printf("Ban trung         : %d so\n", trung);
		printf("------------------------------------\n");

		if (trung == 0)
		{
			printf(" CHuc ban may man lan sau!\n");
		}
		else if (trung == 1)
			printf(" CHUC MUNG! BAN DA TRUNG GIAI NHI!\n");
		else if (trung == 2)
			printf("  ------>BAN DA TRUNG GIAI DOC DAC <------\n");


		printf("---------------------------------------------\n");
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s(" %c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

void tinhToanPhanSo()
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
		scanf_s(" %c", &Tieptuc);
	} 
	while (Tieptuc == 'y' || Tieptuc == 'Y');
	system("cls");
}

int main()
{
	int chon;
	do
	{
		printf("==============================================================\n");
		printf("				MENU CHUC NANG \n");
		printf("==============================================================\n");
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
		printf("==============================================================\n");
		printf("Vui long chon chuc nang tren MENU [0-10] : ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			timUocSoChungVaBoiSoChungCuaHaiSo();
			break;
		case 3:
			tinhTienChoQuanKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiSuatVayNganHangTraGop();
			break;
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			sapXepThongTinSinhVien();
			break;
		case 9:
			xayDungGame_FPOLY_LOTT();
			break;
		case 10:
			tinhToanPhanSo();
			break;
		case 0:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("Chuc nang ban chon khong hop le. Vui long chon lai!\n");
			break;
		}
	} while (chon != 0);
	return 0;
}