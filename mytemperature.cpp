//函数定义写在另一CPP文件mytemperature.cpp）
double celsius_to_fah(double cel)
{
	//华氏度 = 32°F+ 摄氏度 × 1.8
	return (cel * 1.8) + 32.0;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32.0) / 1.8;
}