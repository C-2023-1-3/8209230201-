//��������д����һCPP�ļ�mytemperature.cpp��
double celsius_to_fah(double cel)
{
	//���϶� = 32��F+ ���϶� �� 1.8
	return (cel * 1.8) + 32.0;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32.0) / 1.8;
}