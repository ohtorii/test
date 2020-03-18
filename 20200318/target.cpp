#include"stdafx.h"




AsyncFileReader::AsyncFileReader(const WCHAR *filename, size_t request_read_byte)
{
}

void AsyncFileReader::operator()() {
}

void AsyncFileReader::Sequence(){
}

void AsyncFileReader::LoadFileImage(std::vector<uint8_t>&out_fileimage) {
}

void AsyncFileReader::ConvertToWideChar(std::wstring&out, const std::vector<uint8_t>&fileimage) {
		static_assert(sizeof(std::remove_reference< decltype(out.at(0))>::type) == sizeof(unsigned short), "sizeof(wchar_t) != sizeof(unsigned) short. Must change _byteswap_ushort function.");
}


void AutoPreview::Terminate()  {
}

bool AutoPreview::Finished()  {
}

void AutoPreview::StartFileReadThread() {
}

void AutoPreview::Preview() {
}

void AutoPreview::Destroy() {
}


	
