
static const char *damb_samples = "Damb samples";
static const char *damb_channels = "Damb channels";
static const char *damb_samplerate = "Damb sample rate";
static const char *damb_format = "Damb format";


static inline int getSampleType(int format) {
    if (format & SF_FORMAT_PCM_S8 || format & SF_FORMAT_PCM_U8 || format & SF_FORMAT_PCM_16)
        return SF_FORMAT_PCM_16;

    if (format & SF_FORMAT_PCM_24 || format & SF_FORMAT_PCM_32)
        return SF_FORMAT_PCM_32;

    if (format & SF_FORMAT_FLOAT || format & SF_FORMAT_VORBIS)
        return SF_FORMAT_FLOAT;

    return SF_FORMAT_DOUBLE;
}


static inline int getSampleSize(int sample_type) {
    if (sample_type == SF_FORMAT_PCM_16)
        return 2;

    if (sample_type == SF_FORMAT_PCM_32 || sample_type == SF_FORMAT_FLOAT)
        return 4;

    // SF_FORMAT_DOUBLE
    return 8;
}


