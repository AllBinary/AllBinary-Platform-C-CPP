
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
#include <java/nio/Buffer.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <java/nio/IntBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL10I {
        
    public: static const int32_t GL_ADD = 260;
    public: static const int32_t GL_ALIASED_LINE_WIDTH_RANGE = 33902;
    public: static const int32_t GL_ALIASED_POINT_SIZE_RANGE = 33901;
    public: static const int32_t GL_ALPHA = 6406;
    public: static const int32_t GL_ALPHA_BITS = 3413;
    public: static const int32_t GL_ALPHA_TEST = 3008;
    public: static const int32_t GL_ALWAYS = 519;
    public: static const int32_t GL_AMBIENT = 4608;
    public: static const int32_t GL_AMBIENT_AND_DIFFUSE = 5634;
    public: static const int32_t GL_AND = 5377;
    public: static const int32_t GL_AND_INVERTED = 5380;
    public: static const int32_t GL_AND_REVERSE = 5378;
    public: static const int32_t GL_BACK = 1029;
    public: static const int32_t GL_BLEND = 3042;
    public: static const int32_t GL_BLUE_BITS = 3412;
    public: static const int32_t GL_BYTE = 5120;
    public: static const int32_t GL_CCW = 2305;
    public: static const int32_t GL_CLAMP_TO_EDGE = 33071;
    public: static const int32_t GL_CLEAR = 5376;
    public: static const int32_t GL_COLOR_ARRAY = 32886;
    public: static const int32_t GL_COLOR_BUFFER_BIT = 16384;
    public: static const int32_t GL_COLOR_LOGIC_OP = 3058;
    public: static const int32_t GL_COLOR_MATERIAL = 2903;
    public: static const int32_t GL_COMPRESSED_TEXTURE_FORMATS = 34467;
    public: static const int32_t GL_CONSTANT_ATTENUATION = 4615;
    public: static const int32_t GL_COPY = 5379;
    public: static const int32_t GL_COPY_INVERTED = 5388;
    public: static const int32_t GL_CULL_FACE = 2884;
    public: static const int32_t GL_CW = 2304;
    public: static const int32_t GL_DECAL = 8449;
    public: static const int32_t GL_DECR = 7683;
    public: static const int32_t GL_DEPTH_BITS = 3414;
    public: static const int32_t GL_DEPTH_BUFFER_BIT = 256;
    public: static const int32_t GL_DEPTH_TEST = 2929;
    public: static const int32_t GL_DIFFUSE = 4609;
    public: static const int32_t GL_DITHER = 3024;
    public: static const int32_t GL_DONT_CARE = 4352;
    public: static const int32_t GL_DST_ALPHA = 772;
    public: static const int32_t GL_DST_COLOR = 774;
    public: static const int32_t GL_EMISSION = 5632;
    public: static const int32_t GL_EQUAL = 514;
    public: static const int32_t GL_EQUIV = 5385;
    public: static const int32_t GL_EXP = 2048;
    public: static const int32_t GL_EXP2 = 2049;
    public: static const int32_t GL_EXTENSIONS = 7939;
    public: static const int32_t GL_FALSE = 0;
    public: static const int32_t GL_FASTEST = 4353;
    public: static const int32_t GL_FIXED = 5132;
    public: static const int32_t GL_FLAT = 7424;
    public: static const int32_t GL_FLOAT = 5126;
    public: static const int32_t GL_FOG = 2912;
    public: static const int32_t GL_FOG_COLOR = 2918;
    public: static const int32_t GL_FOG_DENSITY = 2914;
    public: static const int32_t GL_FOG_END = 2916;
    public: static const int32_t GL_FOG_HINT = 3156;
    public: static const int32_t GL_FOG_MODE = 2917;
    public: static const int32_t GL_FOG_START = 2915;
    public: static const int32_t GL_FRONT = 1028;
    public: static const int32_t GL_FRONT_AND_BACK = 1032;
    public: static const int32_t GL_GEQUAL = 518;
    public: static const int32_t GL_GREATER = 516;
    public: static const int32_t GL_GREEN_BITS = 3411;
    public: static const int32_t GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 35739;
    public: static const int32_t GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 35738;
    public: static const int32_t GL_INCR = 7682;
    public: static const int32_t GL_INVALID_ENUM = 1280;
    public: static const int32_t GL_INVALID_OPERATION = 1282;
    public: static const int32_t GL_INVALID_VALUE = 1281;
    public: static const int32_t GL_INVERT = 5386;
    public: static const int32_t GL_KEEP = 7680;
    public: static const int32_t GL_LEQUAL = 515;
    public: static const int32_t GL_LESS = 513;
    public: static const int32_t GL_LIGHT_MODEL_AMBIENT = 2899;
    public: static const int32_t GL_LIGHT_MODEL_TWO_SIDE = 2898;
    public: static const int32_t GL_LIGHT0 = 16384;
    public: static const int32_t GL_LIGHT1 = 16385;
    public: static const int32_t GL_LIGHT2 = 16386;
    public: static const int32_t GL_LIGHT3 = 16387;
    public: static const int32_t GL_LIGHT4 = 16388;
    public: static const int32_t GL_LIGHT5 = 16389;
    public: static const int32_t GL_LIGHT6 = 16390;
    public: static const int32_t GL_LIGHT7 = 16391;
    public: static const int32_t GL_LIGHTING = 2896;
    public: static const int32_t GL_LINE_LOOP = 2;
    public: static const int32_t GL_LINE_SMOOTH = 2848;
    public: static const int32_t GL_LINE_SMOOTH_HINT = 3154;
    public: static const int32_t GL_LINE_STRIP = 3;
    public: static const int32_t GL_LINEAR = 9729;
    public: static const int32_t GL_LINEAR_ATTENUATION = 4616;
    public: static const int32_t GL_LINEAR_MIPMAP_LINEAR = 9987;
    public: static const int32_t GL_LINEAR_MIPMAP_NEAREST = 9985;
    public: static const int32_t GL_LINES = 1;
    public: static const int32_t GL_LUMINANCE = 6409;
    public: static const int32_t GL_LUMINANCE_ALPHA = 6410;
    public: static const int32_t GL_MAX_ELEMENTS_INDICES = 33001;
    public: static const int32_t GL_MAX_ELEMENTS_VERTICES = 33000;
    public: static const int32_t GL_MAX_LIGHTS = 3377;
    public: static const int32_t GL_MAX_MODELVIEW_STACK_DEPTH = 3382;
    public: static const int32_t GL_MAX_PROJECTION_STACK_DEPTH = 3384;
    public: static const int32_t GL_MAX_TEXTURE_SIZE = 3379;
    public: static const int32_t GL_MAX_TEXTURE_STACK_DEPTH = 3385;
    public: static const int32_t GL_MAX_TEXTURE_UNITS = 34018;
    public: static const int32_t GL_MAX_VIEWPORT_DIMS = 3386;
    public: static const int32_t GL_MODELVIEW = 5888;
    public: static const int32_t GL_MODULATE = 8448;
    public: static const int32_t GL_MULTISAMPLE = 32925;
    public: static const int32_t GL_NAND = 5390;
    public: static const int32_t GL_NEAREST = 9728;
    public: static const int32_t GL_NEAREST_MIPMAP_LINEAR = 9986;
    public: static const int32_t GL_NEAREST_MIPMAP_NEAREST = 9984;
    public: static const int32_t GL_NEVER = 512;
    public: static const int32_t GL_NICEST = 4354;
    public: static const int32_t GL_NO_ERROR = 0;
    public: static const int32_t GL_NOOP = 5381;
    public: static const int32_t GL_NOR = 5384;
    public: static const int32_t GL_NORMAL_ARRAY = 32885;
    public: static const int32_t GL_NORMALIZE = 2977;
    public: static const int32_t GL_NOTEQUAL = 517;
    public: static const int32_t GL_NUM_COMPRESSED_TEXTURE_FORMATS = 34466;
    public: static const int32_t GL_ONE = 1;
    public: static const int32_t GL_ONE_MINUS_DST_ALPHA = 773;
    public: static const int32_t GL_ONE_MINUS_DST_COLOR = 775;
    public: static const int32_t GL_ONE_MINUS_SRC_ALPHA = 771;
    public: static const int32_t GL_ONE_MINUS_SRC_COLOR = 769;
    public: static const int32_t GL_OR = 5383;
    public: static const int32_t GL_OR_INVERTED = 5389;
    public: static const int32_t GL_OR_REVERSE = 5387;
    public: static const int32_t GL_OUT_OF_MEMORY = 1285;
    public: static const int32_t GL_PACK_ALIGNMENT = 3333;
    public: static const int32_t GL_PALETTE4_R5_G6_B5_OES = 35730;
    public: static const int32_t GL_PALETTE4_RGB5_A1_OES = 35732;
    public: static const int32_t GL_PALETTE4_RGB8_OES = 35728;
    public: static const int32_t GL_PALETTE4_RGBA4_OES = 35731;
    public: static const int32_t GL_PALETTE4_RGBA8_OES = 35729;
    public: static const int32_t GL_PALETTE8_R5_G6_B5_OES = 35735;
    public: static const int32_t GL_PALETTE8_RGB5_A1_OES = 35737;
    public: static const int32_t GL_PALETTE8_RGB8_OES = 35733;
    public: static const int32_t GL_PALETTE8_RGBA4_OES = 35736;
    public: static const int32_t GL_PALETTE8_RGBA8_OES = 35734;
    public: static const int32_t GL_PERSPECTIVE_CORRECTION_HINT = 3152;
    public: static const int32_t GL_POINT_SMOOTH = 2832;
    public: static const int32_t GL_POINT_SMOOTH_HINT = 3153;
    public: static const int32_t GL_POINTS = 0;
    public: static const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;
    public: static const int32_t GL_POINT_SIZE = 2833;
    public: static const int32_t GL_POLYGON_OFFSET_FILL = 32823;
    public: static const int32_t GL_POLYGON_SMOOTH_HINT = 3155;
    public: static const int32_t GL_POSITION = 4611;
    public: static const int32_t GL_PROJECTION = 5889;
    public: static const int32_t GL_QUADRATIC_ATTENUATION = 4617;
    public: static const int32_t GL_RED_BITS = 3410;
    public: static const int32_t GL_RENDERER = 7937;
    public: static const int32_t GL_REPEAT = 10497;
    public: static const int32_t GL_REPLACE = 7681;
    public: static const int32_t GL_RESCALE_NORMAL = 32826;
    public: static const int32_t GL_RGB = 6407;
    public: static const int32_t GL_RGBA = 6408;
    public: static const int32_t GL_SAMPLE_ALPHA_TO_COVERAGE = 32926;
    public: static const int32_t GL_SAMPLE_ALPHA_TO_ONE = 32927;
    public: static const int32_t GL_SAMPLE_COVERAGE = 32928;
    public: static const int32_t GL_SCISSOR_TEST = 3089;
    public: static const int32_t GL_SET = 5391;
    public: static const int32_t GL_SHININESS = 5633;
    public: static const int32_t GL_SHORT = 5122;
    public: static const int32_t GL_SMOOTH = 7425;
    public: static const int32_t GL_SMOOTH_LINE_WIDTH_RANGE = 2850;
    public: static const int32_t GL_SMOOTH_POINT_SIZE_RANGE = 2834;
    public: static const int32_t GL_SPECULAR = 4610;
    public: static const int32_t GL_SPOT_CUTOFF = 4614;
    public: static const int32_t GL_SPOT_DIRECTION = 4612;
    public: static const int32_t GL_SPOT_EXPONENT = 4613;
    public: static const int32_t GL_SRC_ALPHA = 770;
    public: static const int32_t GL_SRC_ALPHA_SATURATE = 776;
    public: static const int32_t GL_SRC_COLOR = 768;
    public: static const int32_t GL_STACK_OVERFLOW = 1283;
    public: static const int32_t GL_STACK_UNDERFLOW = 1284;
    public: static const int32_t GL_STENCIL_BITS = 3415;
    public: static const int32_t GL_STENCIL_BUFFER_BIT = 1024;
    public: static const int32_t GL_STENCIL_TEST = 2960;
    public: static const int32_t GL_SUBPIXEL_BITS = 3408;
    public: static const int32_t GL_TEXTURE = 5890;
    public: static const int32_t GL_TEXTURE_2D = 3553;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY = 32888;
    public: static const int32_t GL_TEXTURE_ENV = 8960;
    public: static const int32_t GL_TEXTURE_ENV_COLOR = 8705;
    public: static const int32_t GL_TEXTURE_ENV_MODE = 8704;
    public: static const int32_t GL_TEXTURE_MAG_FILTER = 10240;
    public: static const int32_t GL_TEXTURE_MIN_FILTER = 10241;
    public: static const int32_t GL_TEXTURE_WRAP_S = 10242;
    public: static const int32_t GL_TEXTURE_WRAP_T = 10243;
    public: static const int32_t GL_TEXTURE0 = 33984;
    public: static const int32_t GL_TEXTURE1 = 33985;
    public: static const int32_t GL_TEXTURE2 = 33986;
    public: static const int32_t GL_TEXTURE3 = 33987;
    public: static const int32_t GL_TEXTURE4 = 33988;
    public: static const int32_t GL_TEXTURE5 = 33989;
    public: static const int32_t GL_TEXTURE6 = 33990;
    public: static const int32_t GL_TEXTURE7 = 33991;
    public: static const int32_t GL_TEXTURE8 = 33992;
    public: static const int32_t GL_TEXTURE9 = 33993;
    public: static const int32_t GL_TEXTURE10 = 33994;
    public: static const int32_t GL_TEXTURE11 = 33995;
    public: static const int32_t GL_TEXTURE12 = 33996;
    public: static const int32_t GL_TEXTURE13 = 33997;
    public: static const int32_t GL_TEXTURE14 = 33998;
    public: static const int32_t GL_TEXTURE15 = 33999;
    public: static const int32_t GL_TEXTURE16 = 34000;
    public: static const int32_t GL_TEXTURE17 = 34001;
    public: static const int32_t GL_TEXTURE18 = 34002;
    public: static const int32_t GL_TEXTURE19 = 34003;
    public: static const int32_t GL_TEXTURE20 = 34004;
    public: static const int32_t GL_TEXTURE21 = 34005;
    public: static const int32_t GL_TEXTURE22 = 34006;
    public: static const int32_t GL_TEXTURE23 = 34007;
    public: static const int32_t GL_TEXTURE24 = 34008;
    public: static const int32_t GL_TEXTURE25 = 34009;
    public: static const int32_t GL_TEXTURE26 = 34010;
    public: static const int32_t GL_TEXTURE27 = 34011;
    public: static const int32_t GL_TEXTURE28 = 34012;
    public: static const int32_t GL_TEXTURE29 = 34013;
    public: static const int32_t GL_TEXTURE30 = 34014;
    public: static const int32_t GL_TEXTURE31 = 34015;
    public: static const int32_t GL_TRIANGLE_FAN = 6;
    public: static const int32_t GL_TRIANGLE_STRIP = 5;
    public: static const int32_t GL_TRIANGLES = 4;
    public: static const int32_t GL_TRUE = 1;
    public: static const int32_t GL_UNPACK_ALIGNMENT = 3317;
    public: static const int32_t GL_UNSIGNED_BYTE = 5121;
    public: static const int32_t GL_UNSIGNED_SHORT = 5123;
    public: static const int32_t GL_UNSIGNED_SHORT_4_4_4_4 = 32819;
    public: static const int32_t GL_UNSIGNED_SHORT_5_5_5_1 = 32820;
    public: static const int32_t GL_UNSIGNED_SHORT_5_6_5 = 33635;
    public: static const int32_t GL_VENDOR = 7936;
    public: static const int32_t GL_VERSION = 7938;
    public: static const int32_t GL_VERTEX_ARRAY = 32884;
    public: static const int32_t GL_XOR = 5382;
    public: static const int32_t GL_ZERO = 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            }
        
class GL10: public GL {

    //Interfaces do not have static fields - public: static const int32_t GL_ADD = 260;

    //Interfaces do not have static fields - public: static const int32_t GL_ALIASED_LINE_WIDTH_RANGE = 33902;

    //Interfaces do not have static fields - public: static const int32_t GL_ALIASED_POINT_SIZE_RANGE = 33901;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA = 6406;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA_BITS = 3413;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA_TEST = 3008;

    //Interfaces do not have static fields - public: static const int32_t GL_ALWAYS = 519;

    //Interfaces do not have static fields - public: static const int32_t GL_AMBIENT = 4608;

    //Interfaces do not have static fields - public: static const int32_t GL_AMBIENT_AND_DIFFUSE = 5634;

    //Interfaces do not have static fields - public: static const int32_t GL_AND = 5377;

    //Interfaces do not have static fields - public: static const int32_t GL_AND_INVERTED = 5380;

    //Interfaces do not have static fields - public: static const int32_t GL_AND_REVERSE = 5378;

    //Interfaces do not have static fields - public: static const int32_t GL_BACK = 1029;

    //Interfaces do not have static fields - public: static const int32_t GL_BLEND = 3042;

    //Interfaces do not have static fields - public: static const int32_t GL_BLUE_BITS = 3412;

    //Interfaces do not have static fields - public: static const int32_t GL_BYTE = 5120;

    //Interfaces do not have static fields - public: static const int32_t GL_CCW = 2305;

    //Interfaces do not have static fields - public: static const int32_t GL_CLAMP_TO_EDGE = 33071;

    //Interfaces do not have static fields - public: static const int32_t GL_CLEAR = 5376;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY = 32886;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_BUFFER_BIT = 16384;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_LOGIC_OP = 3058;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_MATERIAL = 2903;

    //Interfaces do not have static fields - public: static const int32_t GL_COMPRESSED_TEXTURE_FORMATS = 34467;

    //Interfaces do not have static fields - public: static const int32_t GL_CONSTANT_ATTENUATION = 4615;

    //Interfaces do not have static fields - public: static const int32_t GL_COPY = 5379;

    //Interfaces do not have static fields - public: static const int32_t GL_COPY_INVERTED = 5388;

    //Interfaces do not have static fields - public: static const int32_t GL_CULL_FACE = 2884;

    //Interfaces do not have static fields - public: static const int32_t GL_CW = 2304;

    //Interfaces do not have static fields - public: static const int32_t GL_DECAL = 8449;

    //Interfaces do not have static fields - public: static const int32_t GL_DECR = 7683;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_BITS = 3414;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_BUFFER_BIT = 256;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_TEST = 2929;

    //Interfaces do not have static fields - public: static const int32_t GL_DIFFUSE = 4609;

    //Interfaces do not have static fields - public: static const int32_t GL_DITHER = 3024;

    //Interfaces do not have static fields - public: static const int32_t GL_DONT_CARE = 4352;

    //Interfaces do not have static fields - public: static const int32_t GL_DST_ALPHA = 772;

    //Interfaces do not have static fields - public: static const int32_t GL_DST_COLOR = 774;

    //Interfaces do not have static fields - public: static const int32_t GL_EMISSION = 5632;

    //Interfaces do not have static fields - public: static const int32_t GL_EQUAL = 514;

    //Interfaces do not have static fields - public: static const int32_t GL_EQUIV = 5385;

    //Interfaces do not have static fields - public: static const int32_t GL_EXP = 2048;

    //Interfaces do not have static fields - public: static const int32_t GL_EXP2 = 2049;

    //Interfaces do not have static fields - public: static const int32_t GL_EXTENSIONS = 7939;

    //Interfaces do not have static fields - public: static const int32_t GL_FALSE = 0;

    //Interfaces do not have static fields - public: static const int32_t GL_FASTEST = 4353;

    //Interfaces do not have static fields - public: static const int32_t GL_FIXED = 5132;

    //Interfaces do not have static fields - public: static const int32_t GL_FLAT = 7424;

    //Interfaces do not have static fields - public: static const int32_t GL_FLOAT = 5126;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG = 2912;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_COLOR = 2918;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_DENSITY = 2914;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_END = 2916;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_HINT = 3156;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_MODE = 2917;

    //Interfaces do not have static fields - public: static const int32_t GL_FOG_START = 2915;

    //Interfaces do not have static fields - public: static const int32_t GL_FRONT = 1028;

    //Interfaces do not have static fields - public: static const int32_t GL_FRONT_AND_BACK = 1032;

    //Interfaces do not have static fields - public: static const int32_t GL_GEQUAL = 518;

    //Interfaces do not have static fields - public: static const int32_t GL_GREATER = 516;

    //Interfaces do not have static fields - public: static const int32_t GL_GREEN_BITS = 3411;

    //Interfaces do not have static fields - public: static const int32_t GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 35739;

    //Interfaces do not have static fields - public: static const int32_t GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 35738;

    //Interfaces do not have static fields - public: static const int32_t GL_INCR = 7682;

    //Interfaces do not have static fields - public: static const int32_t GL_INVALID_ENUM = 1280;

    //Interfaces do not have static fields - public: static const int32_t GL_INVALID_OPERATION = 1282;

    //Interfaces do not have static fields - public: static const int32_t GL_INVALID_VALUE = 1281;

    //Interfaces do not have static fields - public: static const int32_t GL_INVERT = 5386;

    //Interfaces do not have static fields - public: static const int32_t GL_KEEP = 7680;

    //Interfaces do not have static fields - public: static const int32_t GL_LEQUAL = 515;

    //Interfaces do not have static fields - public: static const int32_t GL_LESS = 513;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT_MODEL_AMBIENT = 2899;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT_MODEL_TWO_SIDE = 2898;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT0 = 16384;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT1 = 16385;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT2 = 16386;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT3 = 16387;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT4 = 16388;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT5 = 16389;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT6 = 16390;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHT7 = 16391;

    //Interfaces do not have static fields - public: static const int32_t GL_LIGHTING = 2896;

    //Interfaces do not have static fields - public: static const int32_t GL_LINE_LOOP = 2;

    //Interfaces do not have static fields - public: static const int32_t GL_LINE_SMOOTH = 2848;

    //Interfaces do not have static fields - public: static const int32_t GL_LINE_SMOOTH_HINT = 3154;

    //Interfaces do not have static fields - public: static const int32_t GL_LINE_STRIP = 3;

    //Interfaces do not have static fields - public: static const int32_t GL_LINEAR = 9729;

    //Interfaces do not have static fields - public: static const int32_t GL_LINEAR_ATTENUATION = 4616;

    //Interfaces do not have static fields - public: static const int32_t GL_LINEAR_MIPMAP_LINEAR = 9987;

    //Interfaces do not have static fields - public: static const int32_t GL_LINEAR_MIPMAP_NEAREST = 9985;

    //Interfaces do not have static fields - public: static const int32_t GL_LINES = 1;

    //Interfaces do not have static fields - public: static const int32_t GL_LUMINANCE = 6409;

    //Interfaces do not have static fields - public: static const int32_t GL_LUMINANCE_ALPHA = 6410;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_ELEMENTS_INDICES = 33001;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_ELEMENTS_VERTICES = 33000;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_LIGHTS = 3377;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_MODELVIEW_STACK_DEPTH = 3382;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_PROJECTION_STACK_DEPTH = 3384;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_TEXTURE_SIZE = 3379;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_TEXTURE_STACK_DEPTH = 3385;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_TEXTURE_UNITS = 34018;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_VIEWPORT_DIMS = 3386;

    //Interfaces do not have static fields - public: static const int32_t GL_MODELVIEW = 5888;

    //Interfaces do not have static fields - public: static const int32_t GL_MODULATE = 8448;

    //Interfaces do not have static fields - public: static const int32_t GL_MULTISAMPLE = 32925;

    //Interfaces do not have static fields - public: static const int32_t GL_NAND = 5390;

    //Interfaces do not have static fields - public: static const int32_t GL_NEAREST = 9728;

    //Interfaces do not have static fields - public: static const int32_t GL_NEAREST_MIPMAP_LINEAR = 9986;

    //Interfaces do not have static fields - public: static const int32_t GL_NEAREST_MIPMAP_NEAREST = 9984;

    //Interfaces do not have static fields - public: static const int32_t GL_NEVER = 512;

    //Interfaces do not have static fields - public: static const int32_t GL_NICEST = 4354;

    //Interfaces do not have static fields - public: static const int32_t GL_NO_ERROR = 0;

    //Interfaces do not have static fields - public: static const int32_t GL_NOOP = 5381;

    //Interfaces do not have static fields - public: static const int32_t GL_NOR = 5384;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMAL_ARRAY = 32885;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMALIZE = 2977;

    //Interfaces do not have static fields - public: static const int32_t GL_NOTEQUAL = 517;

    //Interfaces do not have static fields - public: static const int32_t GL_NUM_COMPRESSED_TEXTURE_FORMATS = 34466;

    //Interfaces do not have static fields - public: static const int32_t GL_ONE = 1;

    //Interfaces do not have static fields - public: static const int32_t GL_ONE_MINUS_DST_ALPHA = 773;

    //Interfaces do not have static fields - public: static const int32_t GL_ONE_MINUS_DST_COLOR = 775;

    //Interfaces do not have static fields - public: static const int32_t GL_ONE_MINUS_SRC_ALPHA = 771;

    //Interfaces do not have static fields - public: static const int32_t GL_ONE_MINUS_SRC_COLOR = 769;

    //Interfaces do not have static fields - public: static const int32_t GL_OR = 5383;

    //Interfaces do not have static fields - public: static const int32_t GL_OR_INVERTED = 5389;

    //Interfaces do not have static fields - public: static const int32_t GL_OR_REVERSE = 5387;

    //Interfaces do not have static fields - public: static const int32_t GL_OUT_OF_MEMORY = 1285;

    //Interfaces do not have static fields - public: static const int32_t GL_PACK_ALIGNMENT = 3333;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE4_R5_G6_B5_OES = 35730;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE4_RGB5_A1_OES = 35732;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE4_RGB8_OES = 35728;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE4_RGBA4_OES = 35731;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE4_RGBA8_OES = 35729;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE8_R5_G6_B5_OES = 35735;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE8_RGB5_A1_OES = 35737;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE8_RGB8_OES = 35733;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE8_RGBA4_OES = 35736;

    //Interfaces do not have static fields - public: static const int32_t GL_PALETTE8_RGBA8_OES = 35734;

    //Interfaces do not have static fields - public: static const int32_t GL_PERSPECTIVE_CORRECTION_HINT = 3152;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SMOOTH = 2832;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SMOOTH_HINT = 3153;

    //Interfaces do not have static fields - public: static const int32_t GL_POINTS = 0;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE = 2833;

    //Interfaces do not have static fields - public: static const int32_t GL_POLYGON_OFFSET_FILL = 32823;

    //Interfaces do not have static fields - public: static const int32_t GL_POLYGON_SMOOTH_HINT = 3155;

    //Interfaces do not have static fields - public: static const int32_t GL_POSITION = 4611;

    //Interfaces do not have static fields - public: static const int32_t GL_PROJECTION = 5889;

    //Interfaces do not have static fields - public: static const int32_t GL_QUADRATIC_ATTENUATION = 4617;

    //Interfaces do not have static fields - public: static const int32_t GL_RED_BITS = 3410;

    //Interfaces do not have static fields - public: static const int32_t GL_RENDERER = 7937;

    //Interfaces do not have static fields - public: static const int32_t GL_REPEAT = 10497;

    //Interfaces do not have static fields - public: static const int32_t GL_REPLACE = 7681;

    //Interfaces do not have static fields - public: static const int32_t GL_RESCALE_NORMAL = 32826;

    //Interfaces do not have static fields - public: static const int32_t GL_RGB = 6407;

    //Interfaces do not have static fields - public: static const int32_t GL_RGBA = 6408;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_ALPHA_TO_COVERAGE = 32926;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_ALPHA_TO_ONE = 32927;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_COVERAGE = 32928;

    //Interfaces do not have static fields - public: static const int32_t GL_SCISSOR_TEST = 3089;

    //Interfaces do not have static fields - public: static const int32_t GL_SET = 5391;

    //Interfaces do not have static fields - public: static const int32_t GL_SHININESS = 5633;

    //Interfaces do not have static fields - public: static const int32_t GL_SHORT = 5122;

    //Interfaces do not have static fields - public: static const int32_t GL_SMOOTH = 7425;

    //Interfaces do not have static fields - public: static const int32_t GL_SMOOTH_LINE_WIDTH_RANGE = 2850;

    //Interfaces do not have static fields - public: static const int32_t GL_SMOOTH_POINT_SIZE_RANGE = 2834;

    //Interfaces do not have static fields - public: static const int32_t GL_SPECULAR = 4610;

    //Interfaces do not have static fields - public: static const int32_t GL_SPOT_CUTOFF = 4614;

    //Interfaces do not have static fields - public: static const int32_t GL_SPOT_DIRECTION = 4612;

    //Interfaces do not have static fields - public: static const int32_t GL_SPOT_EXPONENT = 4613;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC_ALPHA = 770;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC_ALPHA_SATURATE = 776;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC_COLOR = 768;

    //Interfaces do not have static fields - public: static const int32_t GL_STACK_OVERFLOW = 1283;

    //Interfaces do not have static fields - public: static const int32_t GL_STACK_UNDERFLOW = 1284;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_BITS = 3415;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_BUFFER_BIT = 1024;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_TEST = 2960;

    //Interfaces do not have static fields - public: static const int32_t GL_SUBPIXEL_BITS = 3408;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE = 5890;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_2D = 3553;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY = 32888;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_ENV = 8960;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_ENV_COLOR = 8705;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_ENV_MODE = 8704;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_MAG_FILTER = 10240;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_MIN_FILTER = 10241;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_WRAP_S = 10242;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_WRAP_T = 10243;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE0 = 33984;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE1 = 33985;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE2 = 33986;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE3 = 33987;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE4 = 33988;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE5 = 33989;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE6 = 33990;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE7 = 33991;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE8 = 33992;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE9 = 33993;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE10 = 33994;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE11 = 33995;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE12 = 33996;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE13 = 33997;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE14 = 33998;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE15 = 33999;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE16 = 34000;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE17 = 34001;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE18 = 34002;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE19 = 34003;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE20 = 34004;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE21 = 34005;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE22 = 34006;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE23 = 34007;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE24 = 34008;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE25 = 34009;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE26 = 34010;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE27 = 34011;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE28 = 34012;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE29 = 34013;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE30 = 34014;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE31 = 34015;

    //Interfaces do not have static fields - public: static const int32_t GL_TRIANGLE_FAN = 6;

    //Interfaces do not have static fields - public: static const int32_t GL_TRIANGLE_STRIP = 5;

    //Interfaces do not have static fields - public: static const int32_t GL_TRIANGLES = 4;

    //Interfaces do not have static fields - public: static const int32_t GL_TRUE = 1;

    //Interfaces do not have static fields - public: static const int32_t GL_UNPACK_ALIGNMENT = 3317;

    //Interfaces do not have static fields - public: static const int32_t GL_UNSIGNED_BYTE = 5121;

    //Interfaces do not have static fields - public: static const int32_t GL_UNSIGNED_SHORT = 5123;

    //Interfaces do not have static fields - public: static const int32_t GL_UNSIGNED_SHORT_4_4_4_4 = 32819;

    //Interfaces do not have static fields - public: static const int32_t GL_UNSIGNED_SHORT_5_5_5_1 = 32820;

    //Interfaces do not have static fields - public: static const int32_t GL_UNSIGNED_SHORT_5_6_5 = 33635;

    //Interfaces do not have static fields - public: static const int32_t GL_VENDOR = 7936;

    //Interfaces do not have static fields - public: static const int32_t GL_VERSION = 7938;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY = 32884;

    //Interfaces do not have static fields - public: static const int32_t GL_XOR = 5382;

    //Interfaces do not have static fields - public: static const int32_t GL_ZERO = 0;

    void glActiveTexture(int32_t texture)

    void glAlphaFunc(int32_t func, float ref)

    void glBindTexture(int32_t target, int32_t texture)

    void glBlendFunc(int32_t sfactor, int32_t dfactor)

    void glClear(int32_t mask)

    void glClearColor(float red, float green, float blue, float alpha)

    void glClearDepthf(float depth)

    void glClearStencil(int32_t s)

    void glClientActiveTexture(int32_t texture)

    void glColor4f(float red, float green, float blue, float alpha)

    void glColorMask(bool red, bool green, bool blue, bool alpha)

    void glColorPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer)

    void glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer data)

    void glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer data)

    void glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border)

    void glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height)

    void glCullFace(int32_t mode)

    void glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset)

    void glDeleteTextures(int32_t n, IntBuffer textures)

    void glDepthFunc(int32_t func)

    void glDepthMask(bool flag)

    void glDepthRangef(float zNear, float zFar)

    void glDisable(int32_t cap)

    void glDisableClientState(int32_t array)

    void glDrawArrays(int32_t mode, int32_t first, int32_t count)

    void glDrawElements(int32_t mode, int32_t count, int32_t type, Buffer indices)

    void glEnable(int32_t cap)

    void glEnableClientState(int32_t array)

    void glFinish()

    void glFlush()

    void glFogf(int32_t pname, float param)

    void glFogfv(int32_t pname, std::vector<float> params, int32_t offset)

    void glFogfv(int32_t pname, FloatBuffer params)

    void glFrontFace(int32_t mode)

    void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar)

    void glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset)

    void glGenTextures(int32_t n, IntBuffer textures)

    int32_t glGetError()

    void glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset)

    void glGetIntegerv(int32_t pname, IntBuffer params)

    std::string glGetString(int32_t name)

    void glHint(int32_t target, int32_t mode)

    void glLightModelf(int32_t pname, float param)

    void glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset)

    void glLightModelfv(int32_t pname, FloatBuffer params)

    void glLightf(int32_t light, int32_t pname, float param)

    void glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset)

    void glLightfv(int32_t light, int32_t pname, FloatBuffer params)

    void glLineWidth(float width)

    void glLoadIdentity()

    void glLoadMatrixf(std::vector<float> m, int32_t offset)

    void glLoadMatrixf(FloatBuffer m)

    void glLogicOp(int32_t opcode)

    void glMaterialf(int32_t face, int32_t pname, float param)

    void glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset)

    void glMaterialfv(int32_t face, int32_t pname, FloatBuffer params)

    void glMatrixMode(int32_t mode)

    void glMultMatrixf(std::vector<float> m, int32_t offset)

    void glMultMatrixf(FloatBuffer m)

    void glMultiTexCoord4f(int32_t target, float s, float t, float r, float q)

    void glNormal3f(float nx, float ny, float nz)

    void glNormalPointer(int32_t type, int32_t stride, Buffer pointer)

    void glOrthof(float left, float right, float bottom, float top, float zNear, float zFar)

    void glPixelStorei(int32_t pname, int32_t param)

    void glPointSize(float size)

    void glPolygonOffset(float factor, float units)

    void glPopMatrix()

    void glPushMatrix()

    void glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels)

    void glRotatef(float angle, float x, float y, float z)

    void glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z)

    void glSampleCoverage(float value, bool invert)

    void glScalef(float x, float y, float z)

    void glScalex(int32_t x, int32_t y, int32_t z)

    void glScissor(int32_t x, int32_t y, int32_t width, int32_t height)

    void glShadeModel(int32_t mode)

    void glStencilFunc(int32_t func, int32_t ref, int32_t mask)

    void glStencilMask(int32_t mask)

    void glStencilOp(int32_t fail, int32_t zfail, int32_t zpass)

    void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer)

    void glTexEnvf(int32_t target, int32_t pname, float param)

    void glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset)

    void glTexEnvfv(int32_t target, int32_t pname, FloatBuffer params)

    void glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer pixels)

    void glTexParameterf(int32_t target, int32_t pname, float param)

    void glTexParameteri(int32_t target, int32_t pname, int32_t param)

    void glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels)

    void glTranslatef(float x, float y, float z)

    void glVertexPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer)

    void glViewport(int32_t x, int32_t y, int32_t width, int32_t height)

    void glBegin(int32_t i)

    void glEnd()

    void glVertex3f(float f, float f2, float f3)

    void glPolygonMode(int32_t i, int32_t i1)

};

            

