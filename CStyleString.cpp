// C ��Ÿ�� ��Ʈ��
/*
	C ���� ��Ʈ���� ���� �迭�� ǥ���ߴ�. 
	��Ʈ���� �������� �� ����(\0)�� �ٿ��� ��Ʈ���� �������� ǥ���ߴ�.
	�̷� �� ���ڿ� ���� ���� ��ȣ�� NUL�̴�.
	L�� �� ���� �ƴ϶� �ϳ��̸� NULL �����Ϳʹ� �ٸ� ���̴�.

	C++������ C ���� ����ϴ� ��Ʈ�� ���꿡 ���� �Լ��� �����ϸ� 
	�̷��� �Լ��� <cstring> ��� ���Ͽ� ���ǵǾ� �ִ�.
	�׸��� ��ü�� �޸� �Ҵ� ����� �������� �ʴ´�.

		char* result = new char[strlen(str)]; // ����! �� ĭ�� �����ϴ�.

	C ��Ÿ���� ��Ʈ���� �ٷ� ���� �׻� �� ���� �����ؾ� �Ѵ�.

		char* result = new char[strlen(str) + 1];

	C ��Ÿ�� ��Ʈ���� ������ ���� sizeof()�� strlen()�� ����� ���� �ٸ���.
	sizeof()�� ���ϰ��� C ��Ÿ�� ��Ʈ���� ����� ��Ŀ� ���� �ٸ��� �����̴�.
	���� ��� ��Ʈ���� char[]�� �����ϸ� sizeof()�� '\0'�� �����Ͽ� �� ��Ʈ���� ���� 
	������ �Ҵ�� �޸� ũ�⸦ �����Ѵ�.
	�ݸ� C ��Ÿ�� ��Ʈ���� char*�� �����ߴٸ� sizeof()�� �������� ũ�⸦ �����Ѵ�.

		const char* text = "abcdef";
		sizeof(text); // �÷������� �ٸ���.
		strlen(text); // 6

	�� �ڵ带 32��Ʈ ��忡�� �������ϸ� ���� 4��, 64��Ʈ ��忡�� �������ϸ� 8�̴�.
	sizeof()�� �������� Ÿ���� const char*�� ũ�⸦ �����ϱ� �����̴�.
*/