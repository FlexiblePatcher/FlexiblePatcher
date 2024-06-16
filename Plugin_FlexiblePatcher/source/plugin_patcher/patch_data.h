struct array_segment {
	int start, count;
};

extern unsigned short version;
extern bool patch_selected[];
extern const int patch_selected_size;
extern const unsigned char data_buffer[];
extern const int data_buffer_size;
extern const array_segment data_buffer_segment[];
extern const int data_buffer_segment_size;
extern const unsigned int data_address[];
extern const int data_address_size;
extern const array_segment data_address_segment[];
extern const int data_address_segment_size;
extern unsigned char parameter_buffer[];
extern const int parameter_buffer_size;
extern const array_segment parameter_buffer_segment[];
extern const int parameter_buffer_segment_size;
extern const unsigned int parameter_address[];
extern const int parameter_address_size;
extern const array_segment parameter_address_segment[];
extern const int parameter_address_segment_size;
