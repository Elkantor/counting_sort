static inline void counting_sort_index(int* out_buffer, int* out_buffer_indexes, int in_size, int* out_counting_sort_buffer, int in_max_value)
{
    // count the elements
    for (int i = 0; i < in_size; ++i)
    {
        int current_value = out_buffer[i];
        out_counting_sort_buffer[current_value] += 1;
    }

    // cumulative count
    for (int i = 1; i <= in_max_value; ++i)
    {
        int previous_value = out_counting_sort_buffer[i - 1];
        out_counting_sort_buffer[i] += previous_value;
    }

    // store the real indexes
    for (int i = in_size - 1; i >= 0; --i)
    {
        int key = out_buffer[i];
        out_counting_sort_buffer[key] -= 1;
        int current_value = out_counting_sort_buffer[key];
        out_buffer_indexes[current_value] = i;
    }
}