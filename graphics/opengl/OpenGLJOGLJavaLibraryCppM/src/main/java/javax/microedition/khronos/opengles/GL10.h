
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/khronos/opengles/GL.h"
class Buffer;
class IntBuffer;
class FloatBuffer;

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL10I {
        
    public: static inline const int32_t GL_ADD = 260;
    public: static inline const int32_t GL_ALIASED_LINE_WIDTH_RANGE = 33902;
    public: static inline const int32_t GL_ALIASED_POINT_SIZE_RANGE = 33901;
    public: static inline const int32_t GL_ALPHA = 6406;
    public: static inline const int32_t GL_ALPHA_BITS = 3413;
    public: static inline const int32_t GL_ALPHA_TEST = 3008;
    public: static inline const int32_t GL_ALWAYS = 519;
    public: static inline const int32_t GL_AMBIENT = 4608;
    public: static inline const int32_t GL_AMBIENT_AND_DIFFUSE = 5634;
    public: static inline const int32_t GL_AND = 5377;
    public: static inline const int32_t GL_AND_INVERTED = 5380;
    public: static inline const int32_t GL_AND_REVERSE = 5378;
    public: static inline const int32_t GL_BACK = 1029;
    public: static inline const int32_t GL_BLEND = 3042;
    public: static inline const int32_t GL_BLUE_BITS = 3412;
    public: static inline const int32_t GL_BYTE = 5120;
    public: static inline const int32_t GL_CCW = 2305;
    public: static inline const int32_t GL_CLAMP_TO_EDGE = 33071;
    public: static inline const int32_t GL_CLEAR = 5376;
    public: static inline const int32_t GL_COLOR_ARRAY = 32886;
    public: static inline const int32_t GL_COLOR_BUFFER_BIT = 16384;
    public: static inline const int32_t GL_COLOR_LOGIC_OP = 3058;
    public: static inline const int32_t GL_COLOR_MATERIAL = 2903;
    public: static inline const int32_t GL_COMPRESSED_TEXTURE_FORMATS = 34467;
    public: static inline const int32_t GL_CONSTANT_ATTENUATION = 4615;
    public: static inline const int32_t GL_COPY = 5379;
    public: static inline const int32_t GL_COPY_INVERTED = 5388;
    public: static inline const int32_t GL_CULL_FACE = 2884;
    public: static inline const int32_t GL_CW = 2304;
    public: static inline const int32_t GL_DECAL = 8449;
    public: static inline const int32_t GL_DECR = 7683;
    public: static inline const int32_t GL_DEPTH_BITS = 3414;
    public: static inline const int32_t GL_DEPTH_BUFFER_BIT = 256;
    public: static inline const int32_t GL_DEPTH_TEST = 2929;
    public: static inline const int32_t GL_DIFFUSE = 4609;
    public: static inline const int32_t GL_DITHER = 3024;
    public: static inline const int32_t GL_DONT_CARE = 4352;
    public: static inline const int32_t GL_DST_ALPHA = 772;
    public: static inline const int32_t GL_DST_COLOR = 774;
    public: static inline const int32_t GL_EMISSION = 5632;
    public: static inline const int32_t GL_EQUAL = 514;
    public: static inline const int32_t GL_EQUIV = 5385;
    public: static inline const int32_t GL_EXP = 2048;
    public: static inline const int32_t GL_EXP2 = 2049;
    public: static inline const int32_t GL_EXTENSIONS = 7939;
    public: static inline const int32_t GL_FALSE = 0;
    public: static inline const int32_t GL_FASTEST = 4353;
    public: static inline const int32_t GL_FIXED = 5132;
    public: static inline const int32_t GL_FLAT = 7424;
    public: static inline const int32_t GL_FLOAT = 5126;
    public: static inline const int32_t GL_FOG = 2912;
    public: static inline const int32_t GL_FOG_COLOR = 2918;
    public: static inline const int32_t GL_FOG_DENSITY = 2914;
    public: static inline const int32_t GL_FOG_END = 2916;
    public: static inline const int32_t GL_FOG_HINT = 3156;
    public: static inline const int32_t GL_FOG_MODE = 2917;
    public: static inline const int32_t GL_FOG_START = 2915;
    public: static inline const int32_t GL_FRONT = 1028;
    public: static inline const int32_t GL_FRONT_AND_BACK = 1032;
    public: static inline const int32_t GL_GEQUAL = 518;
    public: static inline const int32_t GL_GREATER = 516;
    public: static inline const int32_t GL_GREEN_BITS = 3411;
    public: static inline const int32_t GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 35739;
    public: static inline const int32_t GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 35738;
    public: static inline const int32_t GL_INCR = 7682;
    public: static inline const int32_t GL_INVALID_ENUM = 1280;
    public: static inline const int32_t GL_INVALID_OPERATION = 1282;
    public: static inline const int32_t GL_INVALID_VALUE = 1281;
    public: static inline const int32_t GL_INVERT = 5386;
    public: static inline const int32_t GL_KEEP = 7680;
    public: static inline const int32_t GL_LEQUAL = 515;
    public: static inline const int32_t GL_LESS = 513;
    public: static inline const int32_t GL_LIGHT_MODEL_AMBIENT = 2899;
    public: static inline const int32_t GL_LIGHT_MODEL_TWO_SIDE = 2898;
    public: static inline const int32_t GL_LIGHT0 = 16384;
    public: static inline const int32_t GL_LIGHT1 = 16385;
    public: static inline const int32_t GL_LIGHT2 = 16386;
    public: static inline const int32_t GL_LIGHT3 = 16387;
    public: static inline const int32_t GL_LIGHT4 = 16388;
    public: static inline const int32_t GL_LIGHT5 = 16389;
    public: static inline const int32_t GL_LIGHT6 = 16390;
    public: static inline const int32_t GL_LIGHT7 = 16391;
    public: static inline const int32_t GL_LIGHTING = 2896;
    public: static inline const int32_t GL_LINE_LOOP = 2;
    public: static inline const int32_t GL_LINE_SMOOTH = 2848;
    public: static inline const int32_t GL_LINE_SMOOTH_HINT = 3154;
    public: static inline const int32_t GL_LINE_STRIP = 3;
    public: static inline const int32_t GL_LINEAR = 9729;
    public: static inline const int32_t GL_LINEAR_ATTENUATION = 4616;
    public: static inline const int32_t GL_LINEAR_MIPMAP_LINEAR = 9987;
    public: static inline const int32_t GL_LINEAR_MIPMAP_NEAREST = 9985;
    public: static inline const int32_t GL_LINES = 1;
    public: static inline const int32_t GL_LUMINANCE = 6409;
    public: static inline const int32_t GL_LUMINANCE_ALPHA = 6410;
    public: static inline const int32_t GL_MAX_ELEMENTS_INDICES = 33001;
    public: static inline const int32_t GL_MAX_ELEMENTS_VERTICES = 33000;
    public: static inline const int32_t GL_MAX_LIGHTS = 3377;
    public: static inline const int32_t GL_MAX_MODELVIEW_STACK_DEPTH = 3382;
    public: static inline const int32_t GL_MAX_PROJECTION_STACK_DEPTH = 3384;
    public: static inline const int32_t GL_MAX_TEXTURE_SIZE = 3379;
    public: static inline const int32_t GL_MAX_TEXTURE_STACK_DEPTH = 3385;
    public: static inline const int32_t GL_MAX_TEXTURE_UNITS = 34018;
    public: static inline const int32_t GL_MAX_VIEWPORT_DIMS = 3386;
    public: static inline const int32_t GL_MODELVIEW = 5888;
    public: static inline const int32_t GL_MODULATE = 8448;
    public: static inline const int32_t GL_MULTISAMPLE = 32925;
    public: static inline const int32_t GL_NAND = 5390;
    public: static inline const int32_t GL_NEAREST = 9728;
    public: static inline const int32_t GL_NEAREST_MIPMAP_LINEAR = 9986;
    public: static inline const int32_t GL_NEAREST_MIPMAP_NEAREST = 9984;
    public: static inline const int32_t GL_NEVER = 512;
    public: static inline const int32_t GL_NICEST = 4354;
    public: static inline const int32_t GL_NO_ERROR = 0;
    public: static inline const int32_t GL_NOOP = 5381;
    public: static inline const int32_t GL_NOR = 5384;
    public: static inline const int32_t GL_NORMAL_ARRAY = 32885;
    public: static inline const int32_t GL_NORMALIZE = 2977;
    public: static inline const int32_t GL_NOTEQUAL = 517;
    public: static inline const int32_t GL_NUM_COMPRESSED_TEXTURE_FORMATS = 34466;
    public: static inline const int32_t GL_ONE = 1;
    public: static inline const int32_t GL_ONE_MINUS_DST_ALPHA = 773;
    public: static inline const int32_t GL_ONE_MINUS_DST_COLOR = 775;
    public: static inline const int32_t GL_ONE_MINUS_SRC_ALPHA = 771;
    public: static inline const int32_t GL_ONE_MINUS_SRC_COLOR = 769;
    public: static inline const int32_t GL_OR = 5383;
    public: static inline const int32_t GL_OR_INVERTED = 5389;
    public: static inline const int32_t GL_OR_REVERSE = 5387;
    public: static inline const int32_t GL_OUT_OF_MEMORY = 1285;
    public: static inline const int32_t GL_PACK_ALIGNMENT = 3333;
    public: static inline const int32_t GL_PALETTE4_R5_G6_B5_OES = 35730;
    public: static inline const int32_t GL_PALETTE4_RGB5_A1_OES = 35732;
    public: static inline const int32_t GL_PALETTE4_RGB8_OES = 35728;
    public: static inline const int32_t GL_PALETTE4_RGBA4_OES = 35731;
    public: static inline const int32_t GL_PALETTE4_RGBA8_OES = 35729;
    public: static inline const int32_t GL_PALETTE8_R5_G6_B5_OES = 35735;
    public: static inline const int32_t GL_PALETTE8_RGB5_A1_OES = 35737;
    public: static inline const int32_t GL_PALETTE8_RGB8_OES = 35733;
    public: static inline const int32_t GL_PALETTE8_RGBA4_OES = 35736;
    public: static inline const int32_t GL_PALETTE8_RGBA8_OES = 35734;
    public: static inline const int32_t GL_PERSPECTIVE_CORRECTION_HINT = 3152;
    public: static inline const int32_t GL_POINT_SMOOTH = 2832;
    public: static inline const int32_t GL_POINT_SMOOTH_HINT = 3153;
    public: static inline const int32_t GL_POINTS = 0;
    public: static inline const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;
    public: static inline const int32_t GL_POINT_SIZE = 2833;
    public: static inline const int32_t GL_POLYGON_OFFSET_FILL = 32823;
    public: static inline const int32_t GL_POLYGON_SMOOTH_HINT = 3155;
    public: static inline const int32_t GL_POSITION = 4611;
    public: static inline const int32_t GL_PROJECTION = 5889;
    public: static inline const int32_t GL_QUADRATIC_ATTENUATION = 4617;
    public: static inline const int32_t GL_RED_BITS = 3410;
    public: static inline const int32_t GL_RENDERER = 7937;
    public: static inline const int32_t GL_REPEAT = 10497;
    public: static inline const int32_t GL_REPLACE = 7681;
    public: static inline const int32_t GL_RESCALE_NORMAL = 32826;
    public: static inline const int32_t GL_RGB = 6407;
    public: static inline const int32_t GL_RGBA = 6408;
    public: static inline const int32_t GL_SAMPLE_ALPHA_TO_COVERAGE = 32926;
    public: static inline const int32_t GL_SAMPLE_ALPHA_TO_ONE = 32927;
    public: static inline const int32_t GL_SAMPLE_COVERAGE = 32928;
    public: static inline const int32_t GL_SCISSOR_TEST = 3089;
    public: static inline const int32_t GL_SET = 5391;
    public: static inline const int32_t GL_SHININESS = 5633;
    public: static inline const int32_t GL_SHORT = 5122;
    public: static inline const int32_t GL_SMOOTH = 7425;
    public: static inline const int32_t GL_SMOOTH_LINE_WIDTH_RANGE = 2850;
    public: static inline const int32_t GL_SMOOTH_POINT_SIZE_RANGE = 2834;
    public: static inline const int32_t GL_SPECULAR = 4610;
    public: static inline const int32_t GL_SPOT_CUTOFF = 4614;
    public: static inline const int32_t GL_SPOT_DIRECTION = 4612;
    public: static inline const int32_t GL_SPOT_EXPONENT = 4613;
    public: static inline const int32_t GL_SRC_ALPHA = 770;
    public: static inline const int32_t GL_SRC_ALPHA_SATURATE = 776;
    public: static inline const int32_t GL_SRC_COLOR = 768;
    public: static inline const int32_t GL_STACK_OVERFLOW = 1283;
    public: static inline const int32_t GL_STACK_UNDERFLOW = 1284;
    public: static inline const int32_t GL_STENCIL_BITS = 3415;
    public: static inline const int32_t GL_STENCIL_BUFFER_BIT = 1024;
    public: static inline const int32_t GL_STENCIL_TEST = 2960;
    public: static inline const int32_t GL_SUBPIXEL_BITS = 3408;
    public: static inline const int32_t GL_TEXTURE = 5890;
    public: static inline const int32_t GL_TEXTURE_2D = 3553;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY = 32888;
    public: static inline const int32_t GL_TEXTURE_ENV = 8960;
    public: static inline const int32_t GL_TEXTURE_ENV_COLOR = 8705;
    public: static inline const int32_t GL_TEXTURE_ENV_MODE = 8704;
    public: static inline const int32_t GL_TEXTURE_MAG_FILTER = 10240;
    public: static inline const int32_t GL_TEXTURE_MIN_FILTER = 10241;
    public: static inline const int32_t GL_TEXTURE_WRAP_S = 10242;
    public: static inline const int32_t GL_TEXTURE_WRAP_T = 10243;
    public: static inline const int32_t GL_TEXTURE0 = 33984;
    public: static inline const int32_t GL_TEXTURE1 = 33985;
    public: static inline const int32_t GL_TEXTURE2 = 33986;
    public: static inline const int32_t GL_TEXTURE3 = 33987;
    public: static inline const int32_t GL_TEXTURE4 = 33988;
    public: static inline const int32_t GL_TEXTURE5 = 33989;
    public: static inline const int32_t GL_TEXTURE6 = 33990;
    public: static inline const int32_t GL_TEXTURE7 = 33991;
    public: static inline const int32_t GL_TEXTURE8 = 33992;
    public: static inline const int32_t GL_TEXTURE9 = 33993;
    public: static inline const int32_t GL_TEXTURE10 = 33994;
    public: static inline const int32_t GL_TEXTURE11 = 33995;
    public: static inline const int32_t GL_TEXTURE12 = 33996;
    public: static inline const int32_t GL_TEXTURE13 = 33997;
    public: static inline const int32_t GL_TEXTURE14 = 33998;
    public: static inline const int32_t GL_TEXTURE15 = 33999;
    public: static inline const int32_t GL_TEXTURE16 = 34000;
    public: static inline const int32_t GL_TEXTURE17 = 34001;
    public: static inline const int32_t GL_TEXTURE18 = 34002;
    public: static inline const int32_t GL_TEXTURE19 = 34003;
    public: static inline const int32_t GL_TEXTURE20 = 34004;
    public: static inline const int32_t GL_TEXTURE21 = 34005;
    public: static inline const int32_t GL_TEXTURE22 = 34006;
    public: static inline const int32_t GL_TEXTURE23 = 34007;
    public: static inline const int32_t GL_TEXTURE24 = 34008;
    public: static inline const int32_t GL_TEXTURE25 = 34009;
    public: static inline const int32_t GL_TEXTURE26 = 34010;
    public: static inline const int32_t GL_TEXTURE27 = 34011;
    public: static inline const int32_t GL_TEXTURE28 = 34012;
    public: static inline const int32_t GL_TEXTURE29 = 34013;
    public: static inline const int32_t GL_TEXTURE30 = 34014;
    public: static inline const int32_t GL_TEXTURE31 = 34015;
    public: static inline const int32_t GL_TRIANGLE_FAN = 6;
    public: static inline const int32_t GL_TRIANGLE_STRIP = 5;
    public: static inline const int32_t GL_TRIANGLES = 4;
    public: static inline const int32_t GL_TRUE = 1;
    public: static inline const int32_t GL_UNPACK_ALIGNMENT = 3317;
    public: static inline const int32_t GL_UNSIGNED_BYTE = 5121;
    public: static inline const int32_t GL_UNSIGNED_SHORT = 5123;
    public: static inline const int32_t GL_UNSIGNED_SHORT_4_4_4_4 = 32819;
    public: static inline const int32_t GL_UNSIGNED_SHORT_5_5_5_1 = 32820;
    public: static inline const int32_t GL_UNSIGNED_SHORT_5_6_5 = 33635;
    public: static inline const int32_t GL_VENDOR = 7936;
    public: static inline const int32_t GL_VERSION = 7938;
    public: static inline const int32_t GL_VERTEX_ARRAY = 32884;
    public: static inline const int32_t GL_XOR = 5382;
    public: static inline const int32_t GL_ZERO = 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            };
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GL10: public virtual javax::microedition::khronos::opengles::GL {

    public: static inline const int32_t GL_ADD = 260;

    public: static inline const int32_t GL_ALIASED_LINE_WIDTH_RANGE = 33902;

    public: static inline const int32_t GL_ALIASED_POINT_SIZE_RANGE = 33901;

    public: static inline const int32_t GL_ALPHA = 6406;

    public: static inline const int32_t GL_ALPHA_BITS = 3413;

    public: static inline const int32_t GL_ALPHA_TEST = 3008;

    public: static inline const int32_t GL_ALWAYS = 519;

    public: static inline const int32_t GL_AMBIENT = 4608;

    public: static inline const int32_t GL_AMBIENT_AND_DIFFUSE = 5634;

    public: static inline const int32_t GL_AND = 5377;

    public: static inline const int32_t GL_AND_INVERTED = 5380;

    public: static inline const int32_t GL_AND_REVERSE = 5378;

    public: static inline const int32_t GL_BACK = 1029;

    public: static inline const int32_t GL_BLEND = 3042;

    public: static inline const int32_t GL_BLUE_BITS = 3412;

    public: static inline const int32_t GL_BYTE = 5120;

    public: static inline const int32_t GL_CCW = 2305;

    public: static inline const int32_t GL_CLAMP_TO_EDGE = 33071;

    public: static inline const int32_t GL_CLEAR = 5376;

    public: static inline const int32_t GL_COLOR_ARRAY = 32886;

    public: static inline const int32_t GL_COLOR_BUFFER_BIT = 16384;

    public: static inline const int32_t GL_COLOR_LOGIC_OP = 3058;

    public: static inline const int32_t GL_COLOR_MATERIAL = 2903;

    public: static inline const int32_t GL_COMPRESSED_TEXTURE_FORMATS = 34467;

    public: static inline const int32_t GL_CONSTANT_ATTENUATION = 4615;

    public: static inline const int32_t GL_COPY = 5379;

    public: static inline const int32_t GL_COPY_INVERTED = 5388;

    public: static inline const int32_t GL_CULL_FACE = 2884;

    public: static inline const int32_t GL_CW = 2304;

    public: static inline const int32_t GL_DECAL = 8449;

    public: static inline const int32_t GL_DECR = 7683;

    public: static inline const int32_t GL_DEPTH_BITS = 3414;

    public: static inline const int32_t GL_DEPTH_BUFFER_BIT = 256;

    public: static inline const int32_t GL_DEPTH_TEST = 2929;

    public: static inline const int32_t GL_DIFFUSE = 4609;

    public: static inline const int32_t GL_DITHER = 3024;

    public: static inline const int32_t GL_DONT_CARE = 4352;

    public: static inline const int32_t GL_DST_ALPHA = 772;

    public: static inline const int32_t GL_DST_COLOR = 774;

    public: static inline const int32_t GL_EMISSION = 5632;

    public: static inline const int32_t GL_EQUAL = 514;

    public: static inline const int32_t GL_EQUIV = 5385;

    public: static inline const int32_t GL_EXP = 2048;

    public: static inline const int32_t GL_EXP2 = 2049;

    public: static inline const int32_t GL_EXTENSIONS = 7939;

    public: static inline const int32_t GL_FALSE = 0;

    public: static inline const int32_t GL_FASTEST = 4353;

    public: static inline const int32_t GL_FIXED = 5132;

    public: static inline const int32_t GL_FLAT = 7424;

    public: static inline const int32_t GL_FLOAT = 5126;

    public: static inline const int32_t GL_FOG = 2912;

    public: static inline const int32_t GL_FOG_COLOR = 2918;

    public: static inline const int32_t GL_FOG_DENSITY = 2914;

    public: static inline const int32_t GL_FOG_END = 2916;

    public: static inline const int32_t GL_FOG_HINT = 3156;

    public: static inline const int32_t GL_FOG_MODE = 2917;

    public: static inline const int32_t GL_FOG_START = 2915;

    public: static inline const int32_t GL_FRONT = 1028;

    public: static inline const int32_t GL_FRONT_AND_BACK = 1032;

    public: static inline const int32_t GL_GEQUAL = 518;

    public: static inline const int32_t GL_GREATER = 516;

    public: static inline const int32_t GL_GREEN_BITS = 3411;

    public: static inline const int32_t GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 35739;

    public: static inline const int32_t GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 35738;

    public: static inline const int32_t GL_INCR = 7682;

    public: static inline const int32_t GL_INVALID_ENUM = 1280;

    public: static inline const int32_t GL_INVALID_OPERATION = 1282;

    public: static inline const int32_t GL_INVALID_VALUE = 1281;

    public: static inline const int32_t GL_INVERT = 5386;

    public: static inline const int32_t GL_KEEP = 7680;

    public: static inline const int32_t GL_LEQUAL = 515;

    public: static inline const int32_t GL_LESS = 513;

    public: static inline const int32_t GL_LIGHT_MODEL_AMBIENT = 2899;

    public: static inline const int32_t GL_LIGHT_MODEL_TWO_SIDE = 2898;

    public: static inline const int32_t GL_LIGHT0 = 16384;

    public: static inline const int32_t GL_LIGHT1 = 16385;

    public: static inline const int32_t GL_LIGHT2 = 16386;

    public: static inline const int32_t GL_LIGHT3 = 16387;

    public: static inline const int32_t GL_LIGHT4 = 16388;

    public: static inline const int32_t GL_LIGHT5 = 16389;

    public: static inline const int32_t GL_LIGHT6 = 16390;

    public: static inline const int32_t GL_LIGHT7 = 16391;

    public: static inline const int32_t GL_LIGHTING = 2896;

    public: static inline const int32_t GL_LINE_LOOP = 2;

    public: static inline const int32_t GL_LINE_SMOOTH = 2848;

    public: static inline const int32_t GL_LINE_SMOOTH_HINT = 3154;

    public: static inline const int32_t GL_LINE_STRIP = 3;

    public: static inline const int32_t GL_LINEAR = 9729;

    public: static inline const int32_t GL_LINEAR_ATTENUATION = 4616;

    public: static inline const int32_t GL_LINEAR_MIPMAP_LINEAR = 9987;

    public: static inline const int32_t GL_LINEAR_MIPMAP_NEAREST = 9985;

    public: static inline const int32_t GL_LINES = 1;

    public: static inline const int32_t GL_LUMINANCE = 6409;

    public: static inline const int32_t GL_LUMINANCE_ALPHA = 6410;

    public: static inline const int32_t GL_MAX_ELEMENTS_INDICES = 33001;

    public: static inline const int32_t GL_MAX_ELEMENTS_VERTICES = 33000;

    public: static inline const int32_t GL_MAX_LIGHTS = 3377;

    public: static inline const int32_t GL_MAX_MODELVIEW_STACK_DEPTH = 3382;

    public: static inline const int32_t GL_MAX_PROJECTION_STACK_DEPTH = 3384;

    public: static inline const int32_t GL_MAX_TEXTURE_SIZE = 3379;

    public: static inline const int32_t GL_MAX_TEXTURE_STACK_DEPTH = 3385;

    public: static inline const int32_t GL_MAX_TEXTURE_UNITS = 34018;

    public: static inline const int32_t GL_MAX_VIEWPORT_DIMS = 3386;

    public: static inline const int32_t GL_MODELVIEW = 5888;

    public: static inline const int32_t GL_MODULATE = 8448;

    public: static inline const int32_t GL_MULTISAMPLE = 32925;

    public: static inline const int32_t GL_NAND = 5390;

    public: static inline const int32_t GL_NEAREST = 9728;

    public: static inline const int32_t GL_NEAREST_MIPMAP_LINEAR = 9986;

    public: static inline const int32_t GL_NEAREST_MIPMAP_NEAREST = 9984;

    public: static inline const int32_t GL_NEVER = 512;

    public: static inline const int32_t GL_NICEST = 4354;

    public: static inline const int32_t GL_NO_ERROR = 0;

    public: static inline const int32_t GL_NOOP = 5381;

    public: static inline const int32_t GL_NOR = 5384;

    public: static inline const int32_t GL_NORMAL_ARRAY = 32885;

    public: static inline const int32_t GL_NORMALIZE = 2977;

    public: static inline const int32_t GL_NOTEQUAL = 517;

    public: static inline const int32_t GL_NUM_COMPRESSED_TEXTURE_FORMATS = 34466;

    public: static inline const int32_t GL_ONE = 1;

    public: static inline const int32_t GL_ONE_MINUS_DST_ALPHA = 773;

    public: static inline const int32_t GL_ONE_MINUS_DST_COLOR = 775;

    public: static inline const int32_t GL_ONE_MINUS_SRC_ALPHA = 771;

    public: static inline const int32_t GL_ONE_MINUS_SRC_COLOR = 769;

    public: static inline const int32_t GL_OR = 5383;

    public: static inline const int32_t GL_OR_INVERTED = 5389;

    public: static inline const int32_t GL_OR_REVERSE = 5387;

    public: static inline const int32_t GL_OUT_OF_MEMORY = 1285;

    public: static inline const int32_t GL_PACK_ALIGNMENT = 3333;

    public: static inline const int32_t GL_PALETTE4_R5_G6_B5_OES = 35730;

    public: static inline const int32_t GL_PALETTE4_RGB5_A1_OES = 35732;

    public: static inline const int32_t GL_PALETTE4_RGB8_OES = 35728;

    public: static inline const int32_t GL_PALETTE4_RGBA4_OES = 35731;

    public: static inline const int32_t GL_PALETTE4_RGBA8_OES = 35729;

    public: static inline const int32_t GL_PALETTE8_R5_G6_B5_OES = 35735;

    public: static inline const int32_t GL_PALETTE8_RGB5_A1_OES = 35737;

    public: static inline const int32_t GL_PALETTE8_RGB8_OES = 35733;

    public: static inline const int32_t GL_PALETTE8_RGBA4_OES = 35736;

    public: static inline const int32_t GL_PALETTE8_RGBA8_OES = 35734;

    public: static inline const int32_t GL_PERSPECTIVE_CORRECTION_HINT = 3152;

    public: static inline const int32_t GL_POINT_SMOOTH = 2832;

    public: static inline const int32_t GL_POINT_SMOOTH_HINT = 3153;

    public: static inline const int32_t GL_POINTS = 0;

    public: static inline const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;

    public: static inline const int32_t GL_POINT_SIZE = 2833;

    public: static inline const int32_t GL_POLYGON_OFFSET_FILL = 32823;

    public: static inline const int32_t GL_POLYGON_SMOOTH_HINT = 3155;

    public: static inline const int32_t GL_POSITION = 4611;

    public: static inline const int32_t GL_PROJECTION = 5889;

    public: static inline const int32_t GL_QUADRATIC_ATTENUATION = 4617;

    public: static inline const int32_t GL_RED_BITS = 3410;

    public: static inline const int32_t GL_RENDERER = 7937;

    public: static inline const int32_t GL_REPEAT = 10497;

    public: static inline const int32_t GL_REPLACE = 7681;

    public: static inline const int32_t GL_RESCALE_NORMAL = 32826;

    public: static inline const int32_t GL_RGB = 6407;

    public: static inline const int32_t GL_RGBA = 6408;

    public: static inline const int32_t GL_SAMPLE_ALPHA_TO_COVERAGE = 32926;

    public: static inline const int32_t GL_SAMPLE_ALPHA_TO_ONE = 32927;

    public: static inline const int32_t GL_SAMPLE_COVERAGE = 32928;

    public: static inline const int32_t GL_SCISSOR_TEST = 3089;

    public: static inline const int32_t GL_SET = 5391;

    public: static inline const int32_t GL_SHININESS = 5633;

    public: static inline const int32_t GL_SHORT = 5122;

    public: static inline const int32_t GL_SMOOTH = 7425;

    public: static inline const int32_t GL_SMOOTH_LINE_WIDTH_RANGE = 2850;

    public: static inline const int32_t GL_SMOOTH_POINT_SIZE_RANGE = 2834;

    public: static inline const int32_t GL_SPECULAR = 4610;

    public: static inline const int32_t GL_SPOT_CUTOFF = 4614;

    public: static inline const int32_t GL_SPOT_DIRECTION = 4612;

    public: static inline const int32_t GL_SPOT_EXPONENT = 4613;

    public: static inline const int32_t GL_SRC_ALPHA = 770;

    public: static inline const int32_t GL_SRC_ALPHA_SATURATE = 776;

    public: static inline const int32_t GL_SRC_COLOR = 768;

    public: static inline const int32_t GL_STACK_OVERFLOW = 1283;

    public: static inline const int32_t GL_STACK_UNDERFLOW = 1284;

    public: static inline const int32_t GL_STENCIL_BITS = 3415;

    public: static inline const int32_t GL_STENCIL_BUFFER_BIT = 1024;

    public: static inline const int32_t GL_STENCIL_TEST = 2960;

    public: static inline const int32_t GL_SUBPIXEL_BITS = 3408;

    public: static inline const int32_t GL_TEXTURE = 5890;

    public: static inline const int32_t GL_TEXTURE_2D = 3553;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY = 32888;

    public: static inline const int32_t GL_TEXTURE_ENV = 8960;

    public: static inline const int32_t GL_TEXTURE_ENV_COLOR = 8705;

    public: static inline const int32_t GL_TEXTURE_ENV_MODE = 8704;

    public: static inline const int32_t GL_TEXTURE_MAG_FILTER = 10240;

    public: static inline const int32_t GL_TEXTURE_MIN_FILTER = 10241;

    public: static inline const int32_t GL_TEXTURE_WRAP_S = 10242;

    public: static inline const int32_t GL_TEXTURE_WRAP_T = 10243;

    public: static inline const int32_t GL_TEXTURE0 = 33984;

    public: static inline const int32_t GL_TEXTURE1 = 33985;

    public: static inline const int32_t GL_TEXTURE2 = 33986;

    public: static inline const int32_t GL_TEXTURE3 = 33987;

    public: static inline const int32_t GL_TEXTURE4 = 33988;

    public: static inline const int32_t GL_TEXTURE5 = 33989;

    public: static inline const int32_t GL_TEXTURE6 = 33990;

    public: static inline const int32_t GL_TEXTURE7 = 33991;

    public: static inline const int32_t GL_TEXTURE8 = 33992;

    public: static inline const int32_t GL_TEXTURE9 = 33993;

    public: static inline const int32_t GL_TEXTURE10 = 33994;

    public: static inline const int32_t GL_TEXTURE11 = 33995;

    public: static inline const int32_t GL_TEXTURE12 = 33996;

    public: static inline const int32_t GL_TEXTURE13 = 33997;

    public: static inline const int32_t GL_TEXTURE14 = 33998;

    public: static inline const int32_t GL_TEXTURE15 = 33999;

    public: static inline const int32_t GL_TEXTURE16 = 34000;

    public: static inline const int32_t GL_TEXTURE17 = 34001;

    public: static inline const int32_t GL_TEXTURE18 = 34002;

    public: static inline const int32_t GL_TEXTURE19 = 34003;

    public: static inline const int32_t GL_TEXTURE20 = 34004;

    public: static inline const int32_t GL_TEXTURE21 = 34005;

    public: static inline const int32_t GL_TEXTURE22 = 34006;

    public: static inline const int32_t GL_TEXTURE23 = 34007;

    public: static inline const int32_t GL_TEXTURE24 = 34008;

    public: static inline const int32_t GL_TEXTURE25 = 34009;

    public: static inline const int32_t GL_TEXTURE26 = 34010;

    public: static inline const int32_t GL_TEXTURE27 = 34011;

    public: static inline const int32_t GL_TEXTURE28 = 34012;

    public: static inline const int32_t GL_TEXTURE29 = 34013;

    public: static inline const int32_t GL_TEXTURE30 = 34014;

    public: static inline const int32_t GL_TEXTURE31 = 34015;

    public: static inline const int32_t GL_TRIANGLE_FAN = 6;

    public: static inline const int32_t GL_TRIANGLE_STRIP = 5;

    public: static inline const int32_t GL_TRIANGLES = 4;

    public: static inline const int32_t GL_TRUE = 1;

    public: static inline const int32_t GL_UNPACK_ALIGNMENT = 3317;

    public: static inline const int32_t GL_UNSIGNED_BYTE = 5121;

    public: static inline const int32_t GL_UNSIGNED_SHORT = 5123;

    public: static inline const int32_t GL_UNSIGNED_SHORT_4_4_4_4 = 32819;

    public: static inline const int32_t GL_UNSIGNED_SHORT_5_5_5_1 = 32820;

    public: static inline const int32_t GL_UNSIGNED_SHORT_5_6_5 = 33635;

    public: static inline const int32_t GL_VENDOR = 7936;

    public: static inline const int32_t GL_VERSION = 7938;

    public: static inline const int32_t GL_VERTEX_ARRAY = 32884;

    public: static inline const int32_t GL_XOR = 5382;

    public: static inline const int32_t GL_ZERO = 0;

    public: virtual void glActiveTexture(int32_t texture) = 0;

    public: virtual void glAlphaFunc(int32_t func, float ref) = 0;

    public: virtual void glBindTexture(int32_t target, int32_t texture) = 0;

    public: virtual void glBlendFunc(int32_t sfactor, int32_t dfactor) = 0;

    public: virtual void glClear(int32_t mask) = 0;

    public: virtual void glClearColor(float red, float green, float blue, float alpha) = 0;

    public: virtual void glClearDepthf(float depth) = 0;

    public: virtual void glClearStencil(int32_t s) = 0;

    public: virtual void glClientActiveTexture(int32_t texture) = 0;

    public: virtual void glColor4f(float red, float green, float blue, float alpha) = 0;

    public: virtual void glColorMask(bool red, bool green, bool blue, bool alpha) = 0;

    public: virtual void glColorPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) = 0;

    public: virtual void glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, java::nio::Buffer* data) = 0;

    public: virtual void glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, java::nio::Buffer* data) = 0;

    public: virtual void glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) = 0;

    public: virtual void glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) = 0;

    public: virtual void glCullFace(int32_t mode) = 0;

    public: virtual void glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset) = 0;

    public: virtual void glDeleteTextures(int32_t n, java::nio::IntBuffer* textures) = 0;

    public: virtual void glDepthFunc(int32_t func) = 0;

    public: virtual void glDepthMask(bool flag) = 0;

    public: virtual void glDepthRangef(float zNear, float zFar) = 0;

    public: virtual void glDisable(int32_t cap) = 0;

    public: virtual void glDisableClientState(int32_t array) = 0;

    public: virtual void glDrawArrays(int32_t mode, int32_t first, int32_t count) = 0;

    public: virtual void glDrawElements(int32_t mode, int32_t count, int32_t type, java::nio::Buffer* indices) = 0;

    public: virtual void glEnable(int32_t cap) = 0;

    public: virtual void glEnableClientState(int32_t array) = 0;

    public: virtual void glFinish() = 0;

    public: virtual void glFlush() = 0;

    public: virtual void glFogf(int32_t pname, float param) = 0;

    public: virtual void glFogfv(int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glFogfv(int32_t pname, java::nio::FloatBuffer* params) = 0;

    public: virtual void glFrontFace(int32_t mode) = 0;

    public: virtual void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar) = 0;

    public: virtual void glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset) = 0;

    public: virtual void glGenTextures(int32_t n, java::nio::IntBuffer* textures) = 0;

    public: virtual int32_t glGetError() = 0;

    public: virtual void glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glGetIntegerv(int32_t pname, java::nio::IntBuffer* params) = 0;

    public: virtual std::string glGetString(int32_t name) = 0;

    public: virtual void glHint(int32_t target, int32_t mode) = 0;

    public: virtual void glLightModelf(int32_t pname, float param) = 0;

    public: virtual void glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glLightModelfv(int32_t pname, java::nio::FloatBuffer* params) = 0;

    public: virtual void glLightf(int32_t light, int32_t pname, float param) = 0;

    public: virtual void glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params) = 0;

    public: virtual void glLineWidth(float width) = 0;

    public: virtual void glLoadIdentity() = 0;

    public: virtual void glLoadMatrixf(std::vector<float> m, int32_t offset) = 0;

    public: virtual void glLoadMatrixf(java::nio::FloatBuffer* m) = 0;

    public: virtual void glLogicOp(int32_t opcode) = 0;

    public: virtual void glMaterialf(int32_t face, int32_t pname, float param) = 0;

    public: virtual void glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params) = 0;

    public: virtual void glMatrixMode(int32_t mode) = 0;

    public: virtual void glMultMatrixf(std::vector<float> m, int32_t offset) = 0;

    public: virtual void glMultMatrixf(java::nio::FloatBuffer* m) = 0;

    public: virtual void glMultiTexCoord4f(int32_t target, float s, float t, float r, float q) = 0;

    public: virtual void glNormal3f(float nx, float ny, float nz) = 0;

    public: virtual void glNormalPointer(int32_t type, int32_t stride, java::nio::Buffer* pointer) = 0;

    public: virtual void glOrthof(float left, float right, float bottom, float top, float zNear, float zFar) = 0;

    public: virtual void glPixelStorei(int32_t pname, int32_t param) = 0;

    public: virtual void glPointSize(float size) = 0;

    public: virtual void glPolygonOffset(float factor, float units) = 0;

    public: virtual void glPopMatrix() = 0;

    public: virtual void glPushMatrix() = 0;

    public: virtual void glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels) = 0;

    public: virtual void glRotatef(float angle, float x, float y, float z) = 0;

    public: virtual void glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z) = 0;

    public: virtual void glSampleCoverage(float value, bool invert) = 0;

    public: virtual void glScalef(float x, float y, float z) = 0;

    public: virtual void glScalex(int32_t x, int32_t y, int32_t z) = 0;

    public: virtual void glScissor(int32_t x, int32_t y, int32_t width, int32_t height) = 0;

    public: virtual void glShadeModel(int32_t mode) = 0;

    public: virtual void glStencilFunc(int32_t func, int32_t ref, int32_t mask) = 0;

    public: virtual void glStencilMask(int32_t mask) = 0;

    public: virtual void glStencilOp(int32_t fail, int32_t zfail, int32_t zpass) = 0;

    public: virtual void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) = 0;

    public: virtual void glTexEnvf(int32_t target, int32_t pname, float param) = 0;

    public: virtual void glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glTexEnvfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params) = 0;

    public: virtual void glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, java::nio::Buffer* pixels) = 0;

    public: virtual void glTexParameterf(int32_t target, int32_t pname, float param) = 0;

    public: virtual void glTexParameteri(int32_t target, int32_t pname, int32_t param) = 0;

    public: virtual void glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels) = 0;

    public: virtual void glTranslatef(float x, float y, float z) = 0;

    public: virtual void glVertexPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) = 0;

    public: virtual void glViewport(int32_t x, int32_t y, int32_t width, int32_t height) = 0;

    public: virtual void glBegin(int32_t i) = 0;

    public: virtual void glEnd() = 0;

    public: virtual void glVertex3f(float f, float f2, float f3) = 0;

    public: virtual void glPolygonMode(int32_t i, int32_t i1) = 0;

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H_COMPLETE)
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H_COMPLETE
        #if __has_include("javax/microedition/khronos/opengles/GL.h")
#include "javax/microedition/khronos/opengles/GL.h"
#endif
#if __has_include("javax/microedition/khronos/opengles/Buffer.h")
#include "javax/microedition/khronos/opengles/Buffer.h"
#endif
#if __has_include("javax/microedition/khronos/opengles/IntBuffer.h")
#include "javax/microedition/khronos/opengles/IntBuffer.h"
#endif
#if __has_include("javax/microedition/khronos/opengles/FloatBuffer.h")
#include "javax/microedition/khronos/opengles/FloatBuffer.h"
#endif

        #endif
    
