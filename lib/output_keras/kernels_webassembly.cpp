
#include <stdlib.h>
#include <math.h>

float static_buffer[27112257];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {26861377,23506241,1,3,224,224,112,112,7,7,1,1,2,2,3,3};
int meta_buf_1[] = {23506241,0,26058561,12544,64,147};
int meta_buf_2[] = {9472,9408,26058561,23506241,64,64,64,12544};
int meta_buf_3[] = {23506241,25083457,1,112,112,64,55,55,3,3,2,2,0,0};
int meta_buf_4[] = {25083457,9536,26058561,3025,256,64};
int meta_buf_5[] = {25083457,25920,25284161,3025,64,64};
int meta_buf_6[] = {30080,30016,25284161,25477761,64,64,64,3025};
int meta_buf_7[] = {25477761,23506241,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_8[] = {23506241,30144,25477761,3025,64,576};
int meta_buf_9[] = {67008,67072,25477761,25083457,64,64,64,3025};
int meta_buf_10[] = {25083457,67136,24280641,3025,256,64};
int meta_buf_11[] = {84032,83776,83520,26058561,24280641,25284161,256,256,256,256,3025};
int meta_buf_12[] = {25284161,84288,25083457,3025,64,256};
int meta_buf_13[] = {100672,100736,25083457,26660673,64,64,64,3025};
int meta_buf_14[] = {26660673,23506241,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_15[] = {23506241,100800,26660673,3025,64,576};
int meta_buf_16[] = {137664,137728,26660673,25083457,64,64,64,3025};
int meta_buf_17[] = {25083457,137792,23506241,3025,256,64};
int meta_buf_18[] = {154432,154176,25284161,23506241,26058561,256,256,256,256,3025};
int meta_buf_19[] = {26058561,154688,25083457,3025,64,256};
int meta_buf_20[] = {171072,171136,25083457,25284161,64,64,64,3025};
int meta_buf_21[] = {25284161,23506241,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_22[] = {23506241,171200,25284161,3025,64,576};
int meta_buf_23[] = {208064,208128,25284161,25083457,64,64,64,3025};
int meta_buf_24[] = {25083457,208192,23506241,3025,256,64};
int meta_buf_25[] = {224832,224576,23506241,26058561,24280641,256,256,256,256,3025};
int meta_buf_26[] = {24280641,25083457,1,256,55,55,28,28,1,1,1,1,2,2,0,0};
int meta_buf_27[] = {25083457,225088,26058561,784,512,256};
int meta_buf_28[] = {24280641,25083457,1,256,55,55,28,28,1,1,1,1,2,2,0,0};
int meta_buf_29[] = {25083457,356160,26660673,784,128,256};
int meta_buf_30[] = {388928,389056,26660673,25183809,128,128,128,784};
int meta_buf_31[] = {25183809,23506241,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_32[] = {23506241,389184,25183809,784,128,1152};
int meta_buf_33[] = {536768,536640,25183809,26660673,128,128,128,784};
int meta_buf_34[] = {26660673,536896,24682049,784,512,128};
int meta_buf_35[] = {602944,602432,603456,24682049,26058561,26459969,512,512,512,512,784};
int meta_buf_36[] = {26459969,603968,25183809,784,128,512};
int meta_buf_37[] = {669504,669632,25183809,25477761,128,128,128,784};
int meta_buf_38[] = {25477761,23506241,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_39[] = {23506241,669760,25183809,784,128,1152};
int meta_buf_40[] = {817216,817344,25183809,25477761,128,128,128,784};
int meta_buf_41[] = {25477761,817472,24682049,784,512,128};
int meta_buf_42[] = {883008,883520,24682049,26459969,25284161,512,512,512,512,784};
int meta_buf_43[] = {25284161,884032,25183809,784,128,512};
int meta_buf_44[] = {949568,949696,25183809,26660673,128,128,128,784};
int meta_buf_45[] = {26660673,23506241,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_46[] = {23506241,949824,25183809,784,128,1152};
int meta_buf_47[] = {1097408,1097280,25183809,26660673,128,128,128,784};
int meta_buf_48[] = {26660673,1097536,24682049,784,512,128};
int meta_buf_49[] = {1163584,1163072,24682049,25284161,26459969,512,512,512,512,784};
int meta_buf_50[] = {26459969,1164096,25183809,784,128,512};
int meta_buf_51[] = {1229760,1229632,25183809,25083457,128,128,128,784};
int meta_buf_52[] = {25083457,23506241,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_53[] = {23506241,1229888,25083457,784,128,1152};
int meta_buf_54[] = {1377472,1377344,25083457,25183809,128,128,128,784};
int meta_buf_55[] = {25183809,1377600,24280641,784,512,128};
int meta_buf_56[] = {1443648,1443136,26459969,24280641,24682049,512,512,512,512,784};
int meta_buf_57[] = {24682049,26660673,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_58[] = {26660673,1444160,25083457,196,1024,512};
int meta_buf_59[] = {24682049,26660673,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_60[] = {26660673,1968448,26761025,196,256,512};
int meta_buf_61[] = {2099520,2099776,26761025,26811201,256,256,256,196};
int meta_buf_62[] = {26811201,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_63[] = {24280641,2100032,26811201,196,256,2304};
int meta_buf_64[] = {2689856,2690112,26811201,27011905,256,256,256,196};
int meta_buf_65[] = {27011905,2690368,26459969,196,1024,256};
int meta_buf_66[] = {2952512,2953536,2954560,25083457,26459969,26660673,1024,1024,1024,1024,196};
int meta_buf_67[] = {26660673,2955584,27011905,196,256,1024};
int meta_buf_68[] = {3217728,3217984,27011905,27062081,256,256,256,196};
int meta_buf_69[] = {27062081,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_70[] = {24280641,3218240,27011905,196,256,2304};
int meta_buf_71[] = {3808064,3808320,27011905,27062081,256,256,256,196};
int meta_buf_72[] = {27062081,3808576,25083457,196,1024,256};
int meta_buf_73[] = {4071744,4070720,25083457,26660673,25284161,1024,1024,1024,1024,196};
int meta_buf_74[] = {25284161,4072768,26811201,196,256,1024};
int meta_buf_75[] = {4334912,4335168,26811201,27011905,256,256,256,196};
int meta_buf_76[] = {27011905,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_77[] = {24280641,4335424,26811201,196,256,2304};
int meta_buf_78[] = {4925248,4925504,26811201,27011905,256,256,256,196};
int meta_buf_79[] = {27011905,4925760,25083457,196,1024,256};
int meta_buf_80[] = {5188928,5187904,25083457,25284161,26660673,1024,1024,1024,1024,196};
int meta_buf_81[] = {26660673,5189952,27011905,196,256,1024};
int meta_buf_82[] = {5452096,5452352,27011905,27062081,256,256,256,196};
int meta_buf_83[] = {27062081,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_84[] = {24280641,5452608,27011905,196,256,2304};
int meta_buf_85[] = {6042688,6042432,27011905,27062081,256,256,256,196};
int meta_buf_86[] = {27062081,6042944,25083457,196,1024,256};
int meta_buf_87[] = {6305088,6306112,25083457,26660673,25284161,1024,1024,1024,1024,196};
int meta_buf_88[] = {25284161,6307136,26811201,196,256,1024};
int meta_buf_89[] = {6569536,6569280,26811201,27011905,256,256,256,196};
int meta_buf_90[] = {27011905,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_91[] = {24280641,6569792,26811201,196,256,2304};
int meta_buf_92[] = {7159616,7159872,26811201,27011905,256,256,256,196};
int meta_buf_93[] = {27011905,7160128,25083457,196,1024,256};
int meta_buf_94[] = {7423296,7422272,25083457,25284161,26660673,1024,1024,1024,1024,196};
int meta_buf_95[] = {26660673,7424320,27011905,196,256,1024};
int meta_buf_96[] = {7686720,7686464,27011905,27062081,256,256,256,196};
int meta_buf_97[] = {27062081,24280641,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_98[] = {24280641,7686976,27011905,196,256,2304};
int meta_buf_99[] = {8277056,8276800,27011905,27062081,256,256,256,196};
int meta_buf_100[] = {27062081,8277312,25083457,196,1024,256};
int meta_buf_101[] = {8540480,8539456,25083457,26660673,25284161,1024,1024,1024,1024,196};
int meta_buf_102[] = {25284161,26811201,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_103[] = {26811201,8541504,25183809,49,2048,1024};
int meta_buf_104[] = {25284161,26811201,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_105[] = {26811201,10638656,27011905,49,512,1024};
int meta_buf_106[] = {11162944,11163456,27011905,26836289,512,512,512,49};
int meta_buf_107[] = {26836289,24682049,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_108[] = {24682049,11163968,26836289,49,512,4608};
int meta_buf_109[] = {13523776,13523264,26836289,27011905,512,512,512,49};
int meta_buf_110[] = {27011905,13524288,26660673,49,2048,512};
int meta_buf_111[] = {14576960,14574912,14572864,25183809,26660673,26761025,2048,2048,2048,2048,49};
int meta_buf_112[] = {26761025,14579008,27011905,49,512,2048};
int meta_buf_113[] = {15628096,15627584,27011905,27036993,512,512,512,49};
int meta_buf_114[] = {27036993,24682049,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_115[] = {24682049,15628608,27036993,49,512,4608};
int meta_buf_116[] = {17988416,17987904,27036993,27062081,512,512,512,49};
int meta_buf_117[] = {27062081,17988928,25183809,49,2048,512};
int meta_buf_118[] = {19037504,19039552,26761025,25183809,25477761,2048,2048,2048,2048,49};
int meta_buf_119[] = {25477761,19041600,26836289,49,512,2048};
int meta_buf_120[] = {20090688,20090176,26836289,27036993,512,512,512,49};
int meta_buf_121[] = {27036993,24682049,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_122[] = {24682049,20091200,26836289,49,512,4608};
int meta_buf_123[] = {22451008,22450496,26836289,26811201,512,512,512,49};
int meta_buf_124[] = {26811201,22451520,25083457,49,2048,512};
int meta_buf_125[] = {23502144,23500096,25477761,25083457,25183809,2048,2048,2048,2048,49};
int meta_buf_126[] = {25183809,26836289,1,7,7,2048,1,1,7,7,7,7,0,0};
int meta_buf_127[] = {26836289,26838337,1,1,1,2048,1,1,1,1,1,1,0,0};
int meta_buf_128[] = {26838337,26840385,2048};
int meta_buf_129[] = {26840385,23504192,26842433,1,1,2048};
int meta_buf_130[] = {23506240,26842433,26842434,1};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78,meta_buf_79,meta_buf_80,meta_buf_81,meta_buf_82,meta_buf_83,meta_buf_84,meta_buf_85,meta_buf_86,meta_buf_87,meta_buf_88,meta_buf_89,meta_buf_90,meta_buf_91,meta_buf_92,meta_buf_93,meta_buf_94,meta_buf_95,meta_buf_96,meta_buf_97,meta_buf_98,meta_buf_99,meta_buf_100,meta_buf_101,meta_buf_102,meta_buf_103,meta_buf_104,meta_buf_105,meta_buf_106,meta_buf_107,meta_buf_108,meta_buf_109,meta_buf_110,meta_buf_111,meta_buf_112,meta_buf_113,meta_buf_114,meta_buf_115,meta_buf_116,meta_buf_117,meta_buf_118,meta_buf_119,meta_buf_120,meta_buf_121,meta_buf_122,meta_buf_123,meta_buf_124,meta_buf_125,meta_buf_126,meta_buf_127,meta_buf_128,meta_buf_129,meta_buf_130};

extern "C" void init() {
    //static_buffer = (float*)malloc(27112257 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;
        
        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v8;
            }
            float v11;
            {
                v11 = v10 + v7;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void maxpooling2d_6f91142d9d2142f2bf5f971bbd42a9177ff9f0a3847ed38923b3b331(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;
            
            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void mergedelementwise_d2d24d5c8367b528578c1927f7b56328c1b3f65e79c4946a7c4804ff(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v5[d0 + d1*v8];
            float v14;
            {
                v14 = v13 * v11;
            }
            float v15;
            {
                v15 = v10 + v14;
            }
            const float v16 = v4[d0 + d1*v7];
            float v17;
            {
                v17 = v16 * v12;
            }
            float v18;
            {
                v18 = v15 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0 + d1*v9] = v19;
        }
    }
}


void mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v7;
            }
            float v11;
            {
                v11 = v10 + v8;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void mergedelementwise_3f756dccb9ab870e1be38c6ceaef7016ce6630441ad760314420a0af(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11 * v10;
            }
            float v13;
            {
                v13 = v12 + v9;
            }
            const float v14 = v3[d0 + d1*v6];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0 + d1*v8] = v16;
        }
    }
}


void mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11 * v10;
            }
            float v13;
            {
                v13 = v12 + v9;
            }
            const float v14 = v4[d0 + d1*v7];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0 + d1*v8] = v16;
        }
    }
}


void mergedelementwise_36f6019a49119e8fa95f7803d09b57cbf3b2d357a99a5284bbca1751(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13 * v10;
            }
            float v15;
            {
                v15 = v12 + v14;
            }
            const float v16 = v5[d0 + d1*v8];
            float v17;
            {
                v17 = v16 * v11;
            }
            float v18;
            {
                v18 = v15 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0 + d1*v9] = v19;
        }
    }
}


void mergedelementwise_40f3340c0626005fcaf7e5c2ad466be3f065b19e44268f1e41432bd5(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11 * v9;
            }
            float v13;
            {
                v13 = v12 + v10;
            }
            const float v14 = v4[d0 + d1*v7];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0 + d1*v8] = v16;
        }
    }
}


void mergedelementwise_763658669e21948e9e368745bca1a0f204a2e6a0c1981f458c4a0174(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v5[d0 + d1*v8];
            float v14;
            {
                v14 = v13 * v12;
            }
            float v15;
            {
                v15 = v10 + v14;
            }
            const float v16 = v4[d0 + d1*v7];
            float v17;
            {
                v17 = v16 * v11;
            }
            float v18;
            {
                v18 = v15 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0 + d1*v9] = v19;
        }
    }
}


void mergedelementwise_ec99f83ad29668df92d0de012486c87dc2b731b2eef88917c25af4bf(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11 * v9;
            }
            float v13;
            {
                v13 = v12 + v10;
            }
            const float v14 = v3[d0 + d1*v6];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0 + d1*v8] = v16;
        }
    }
}


void averagepooling2d_0dbf99a782fff01a6fc6f857e42168c01fb90520d3d4151eba450a23(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];
    
    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;
            
            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(const int * meta_buffer )
{
    const float *x = (static_buffer + meta_buffer[0]);
    float *y = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];

    for (int gid = 0; gid < N; gid += 1) {
        y[gid] = x[gid];
    }
}


void mergedelementwise_bc790ae3c83616391164e04573c23499f031f3c4d6ddb1c22929103d(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        float v7;
        {
            v7 = tanh(0.5f * v6) * 0.5f + 0.5f;
        }
        v3[d0] = v7;
    }
}

extern "C" void run() {
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_0);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_1);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_2);
maxpooling2d_6f91142d9d2142f2bf5f971bbd42a9177ff9f0a3847ed38923b3b331(meta_buf_3);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_4);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_5);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_6);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_7);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_8);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_9);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_10);
mergedelementwise_d2d24d5c8367b528578c1927f7b56328c1b3f65e79c4946a7c4804ff(meta_buf_11);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_12);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_13);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_14);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_15);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_16);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_17);
mergedelementwise_3f756dccb9ab870e1be38c6ceaef7016ce6630441ad760314420a0af(meta_buf_18);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_19);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_20);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_21);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_22);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_23);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_24);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_25);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_26);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_27);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_28);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_29);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_30);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_31);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_32);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_33);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_34);
mergedelementwise_36f6019a49119e8fa95f7803d09b57cbf3b2d357a99a5284bbca1751(meta_buf_35);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_36);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_37);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_38);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_39);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_40);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_41);
mergedelementwise_40f3340c0626005fcaf7e5c2ad466be3f065b19e44268f1e41432bd5(meta_buf_42);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_43);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_44);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_45);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_46);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_47);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_48);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_49);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_50);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_51);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_52);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_53);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_54);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_55);
mergedelementwise_3f756dccb9ab870e1be38c6ceaef7016ce6630441ad760314420a0af(meta_buf_56);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_57);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_58);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_59);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_60);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_61);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_62);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_63);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_64);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_65);
mergedelementwise_763658669e21948e9e368745bca1a0f204a2e6a0c1981f458c4a0174(meta_buf_66);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_67);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_68);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_69);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_70);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_71);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_72);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_73);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_74);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_75);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_76);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_77);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_78);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_79);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_80);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_81);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_82);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_83);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_84);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_85);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_86);
mergedelementwise_40f3340c0626005fcaf7e5c2ad466be3f065b19e44268f1e41432bd5(meta_buf_87);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_88);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_89);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_90);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_91);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_92);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_93);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_94);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_95);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_96);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_97);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_98);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_99);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_100);
mergedelementwise_48a21baddb38915713bd4e425ef93bdfac5e23b130c3888d60349821(meta_buf_101);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_102);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_103);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_104);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_105);
mergedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_106);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_107);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_108);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_109);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_110);
mergedelementwise_d2d24d5c8367b528578c1927f7b56328c1b3f65e79c4946a7c4804ff(meta_buf_111);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_112);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_113);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_114);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_115);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_116);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_117);
mergedelementwise_ec99f83ad29668df92d0de012486c87dc2b731b2eef88917c25af4bf(meta_buf_118);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_119);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_120);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_121);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_122);
mergedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_123);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_124);
mergedelementwise_3f756dccb9ab870e1be38c6ceaef7016ce6630441ad760314420a0af(meta_buf_125);
averagepooling2d_0dbf99a782fff01a6fc6f857e42168c01fb90520d3d4151eba450a23(meta_buf_126);
averagepooling2d_0dbf99a782fff01a6fc6f857e42168c01fb90520d3d4151eba450a23(meta_buf_127);
reshape_f6c88dc1fd9479f62d789912530e6a5c7c51c73de368540e8b8e1ceb(meta_buf_128);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_129);
mergedelementwise_bc790ae3c83616391164e04573c23499f031f3c4d6ddb1c22929103d(meta_buf_130);

}

