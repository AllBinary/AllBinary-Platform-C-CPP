
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H

#include <java/nio/Buffer.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <java/nio/IntBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL10I {
        
    public static const GL_ADD: int32_t = 260;
    public static const GL_ALIASED_LINE_WIDTH_RANGE: int32_t = 33902;
    public static const GL_ALIASED_POINT_SIZE_RANGE: int32_t = 33901;
    public static const GL_ALPHA: int32_t = 6406;
    public static const GL_ALPHA_BITS: int32_t = 3413;
    public static const GL_ALPHA_TEST: int32_t = 3008;
    public static const GL_ALWAYS: int32_t = 519;
    public static const GL_AMBIENT: int32_t = 4608;
    public static const GL_AMBIENT_AND_DIFFUSE: int32_t = 5634;
    public static const GL_AND: int32_t = 5377;
    public static const GL_AND_INVERTED: int32_t = 5380;
    public static const GL_AND_REVERSE: int32_t = 5378;
    public static const GL_BACK: int32_t = 1029;
    public static const GL_BLEND: int32_t = 3042;
    public static const GL_BLUE_BITS: int32_t = 3412;
    public static const GL_BYTE: int32_t = 5120;
    public static const GL_CCW: int32_t = 2305;
    public static const GL_CLAMP_TO_EDGE: int32_t = 33071;
    public static const GL_CLEAR: int32_t = 5376;
    public static const GL_COLOR_ARRAY: int32_t = 32886;
    public static const GL_COLOR_BUFFER_BIT: int32_t = 16384;
    public static const GL_COLOR_LOGIC_OP: int32_t = 3058;
    public static const GL_COLOR_MATERIAL: int32_t = 2903;
    public static const GL_COMPRESSED_TEXTURE_FORMATS: int32_t = 34467;
    public static const GL_CONSTANT_ATTENUATION: int32_t = 4615;
    public static const GL_COPY: int32_t = 5379;
    public static const GL_COPY_INVERTED: int32_t = 5388;
    public static const GL_CULL_FACE: int32_t = 2884;
    public static const GL_CW: int32_t = 2304;
    public static const GL_DECAL: int32_t = 8449;
    public static const GL_DECR: int32_t = 7683;
    public static const GL_DEPTH_BITS: int32_t = 3414;
    public static const GL_DEPTH_BUFFER_BIT: int32_t = 256;
    public static const GL_DEPTH_TEST: int32_t = 2929;
    public static const GL_DIFFUSE: int32_t = 4609;
    public static const GL_DITHER: int32_t = 3024;
    public static const GL_DONT_CARE: int32_t = 4352;
    public static const GL_DST_ALPHA: int32_t = 772;
    public static const GL_DST_COLOR: int32_t = 774;
    public static const GL_EMISSION: int32_t = 5632;
    public static const GL_EQUAL: int32_t = 514;
    public static const GL_EQUIV: int32_t = 5385;
    public static const GL_EXP: int32_t = 2048;
    public static const GL_EXP2: int32_t = 2049;
    public static const GL_EXTENSIONS: int32_t = 7939;
    public static const GL_FALSE: int32_t = 0;
    public static const GL_FASTEST: int32_t = 4353;
    public static const GL_FIXED: int32_t = 5132;
    public static const GL_FLAT: int32_t = 7424;
    public static const GL_FLOAT: int32_t = 5126;
    public static const GL_FOG: int32_t = 2912;
    public static const GL_FOG_COLOR: int32_t = 2918;
    public static const GL_FOG_DENSITY: int32_t = 2914;
    public static const GL_FOG_END: int32_t = 2916;
    public static const GL_FOG_HINT: int32_t = 3156;
    public static const GL_FOG_MODE: int32_t = 2917;
    public static const GL_FOG_START: int32_t = 2915;
    public static const GL_FRONT: int32_t = 1028;
    public static const GL_FRONT_AND_BACK: int32_t = 1032;
    public static const GL_GEQUAL: int32_t = 518;
    public static const GL_GREATER: int32_t = 516;
    public static const GL_GREEN_BITS: int32_t = 3411;
    public static const GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES: int32_t = 35739;
    public static const GL_IMPLEMENTATION_COLOR_READ_TYPE_OES: int32_t = 35738;
    public static const GL_INCR: int32_t = 7682;
    public static const GL_INVALID_ENUM: int32_t = 1280;
    public static const GL_INVALID_OPERATION: int32_t = 1282;
    public static const GL_INVALID_VALUE: int32_t = 1281;
    public static const GL_INVERT: int32_t = 5386;
    public static const GL_KEEP: int32_t = 7680;
    public static const GL_LEQUAL: int32_t = 515;
    public static const GL_LESS: int32_t = 513;
    public static const GL_LIGHT_MODEL_AMBIENT: int32_t = 2899;
    public static const GL_LIGHT_MODEL_TWO_SIDE: int32_t = 2898;
    public static const GL_LIGHT0: int32_t = 16384;
    public static const GL_LIGHT1: int32_t = 16385;
    public static const GL_LIGHT2: int32_t = 16386;
    public static const GL_LIGHT3: int32_t = 16387;
    public static const GL_LIGHT4: int32_t = 16388;
    public static const GL_LIGHT5: int32_t = 16389;
    public static const GL_LIGHT6: int32_t = 16390;
    public static const GL_LIGHT7: int32_t = 16391;
    public static const GL_LIGHTING: int32_t = 2896;
    public static const GL_LINE_LOOP: int32_t = 2;
    public static const GL_LINE_SMOOTH: int32_t = 2848;
    public static const GL_LINE_SMOOTH_HINT: int32_t = 3154;
    public static const GL_LINE_STRIP: int32_t = 3;
    public static const GL_LINEAR: int32_t = 9729;
    public static const GL_LINEAR_ATTENUATION: int32_t = 4616;
    public static const GL_LINEAR_MIPMAP_LINEAR: int32_t = 9987;
    public static const GL_LINEAR_MIPMAP_NEAREST: int32_t = 9985;
    public static const GL_LINES: int32_t = 1;
    public static const GL_LUMINANCE: int32_t = 6409;
    public static const GL_LUMINANCE_ALPHA: int32_t = 6410;
    public static const GL_MAX_ELEMENTS_INDICES: int32_t = 33001;
    public static const GL_MAX_ELEMENTS_VERTICES: int32_t = 33000;
    public static const GL_MAX_LIGHTS: int32_t = 3377;
    public static const GL_MAX_MODELVIEW_STACK_DEPTH: int32_t = 3382;
    public static const GL_MAX_PROJECTION_STACK_DEPTH: int32_t = 3384;
    public static const GL_MAX_TEXTURE_SIZE: int32_t = 3379;
    public static const GL_MAX_TEXTURE_STACK_DEPTH: int32_t = 3385;
    public static const GL_MAX_TEXTURE_UNITS: int32_t = 34018;
    public static const GL_MAX_VIEWPORT_DIMS: int32_t = 3386;
    public static const GL_MODELVIEW: int32_t = 5888;
    public static const GL_MODULATE: int32_t = 8448;
    public static const GL_MULTISAMPLE: int32_t = 32925;
    public static const GL_NAND: int32_t = 5390;
    public static const GL_NEAREST: int32_t = 9728;
    public static const GL_NEAREST_MIPMAP_LINEAR: int32_t = 9986;
    public static const GL_NEAREST_MIPMAP_NEAREST: int32_t = 9984;
    public static const GL_NEVER: int32_t = 512;
    public static const GL_NICEST: int32_t = 4354;
    public static const GL_NO_ERROR: int32_t = 0;
    public static const GL_NOOP: int32_t = 5381;
    public static const GL_NOR: int32_t = 5384;
    public static const GL_NORMAL_ARRAY: int32_t = 32885;
    public static const GL_NORMALIZE: int32_t = 2977;
    public static const GL_NOTEQUAL: int32_t = 517;
    public static const GL_NUM_COMPRESSED_TEXTURE_FORMATS: int32_t = 34466;
    public static const GL_ONE: int32_t = 1;
    public static const GL_ONE_MINUS_DST_ALPHA: int32_t = 773;
    public static const GL_ONE_MINUS_DST_COLOR: int32_t = 775;
    public static const GL_ONE_MINUS_SRC_ALPHA: int32_t = 771;
    public static const GL_ONE_MINUS_SRC_COLOR: int32_t = 769;
    public static const GL_OR: int32_t = 5383;
    public static const GL_OR_INVERTED: int32_t = 5389;
    public static const GL_OR_REVERSE: int32_t = 5387;
    public static const GL_OUT_OF_MEMORY: int32_t = 1285;
    public static const GL_PACK_ALIGNMENT: int32_t = 3333;
    public static const GL_PALETTE4_R5_G6_B5_OES: int32_t = 35730;
    public static const GL_PALETTE4_RGB5_A1_OES: int32_t = 35732;
    public static const GL_PALETTE4_RGB8_OES: int32_t = 35728;
    public static const GL_PALETTE4_RGBA4_OES: int32_t = 35731;
    public static const GL_PALETTE4_RGBA8_OES: int32_t = 35729;
    public static const GL_PALETTE8_R5_G6_B5_OES: int32_t = 35735;
    public static const GL_PALETTE8_RGB5_A1_OES: int32_t = 35737;
    public static const GL_PALETTE8_RGB8_OES: int32_t = 35733;
    public static const GL_PALETTE8_RGBA4_OES: int32_t = 35736;
    public static const GL_PALETTE8_RGBA8_OES: int32_t = 35734;
    public static const GL_PERSPECTIVE_CORRECTION_HINT: int32_t = 3152;
    public static const GL_POINT_SMOOTH: int32_t = 2832;
    public static const GL_POINT_SMOOTH_HINT: int32_t = 3153;
    public static const GL_POINTS: int32_t = 0;
    public static const GL_POINT_FADE_THRESHOLD_SIZE: int32_t = 33064;
    public static const GL_POINT_SIZE: int32_t = 2833;
    public static const GL_POLYGON_OFFSET_FILL: int32_t = 32823;
    public static const GL_POLYGON_SMOOTH_HINT: int32_t = 3155;
    public static const GL_POSITION: int32_t = 4611;
    public static const GL_PROJECTION: int32_t = 5889;
    public static const GL_QUADRATIC_ATTENUATION: int32_t = 4617;
    public static const GL_RED_BITS: int32_t = 3410;
    public static const GL_RENDERER: int32_t = 7937;
    public static const GL_REPEAT: int32_t = 10497;
    public static const GL_REPLACE: int32_t = 7681;
    public static const GL_RESCALE_NORMAL: int32_t = 32826;
    public static const GL_RGB: int32_t = 6407;
    public static const GL_RGBA: int32_t = 6408;
    public static const GL_SAMPLE_ALPHA_TO_COVERAGE: int32_t = 32926;
    public static const GL_SAMPLE_ALPHA_TO_ONE: int32_t = 32927;
    public static const GL_SAMPLE_COVERAGE: int32_t = 32928;
    public static const GL_SCISSOR_TEST: int32_t = 3089;
    public static const GL_SET: int32_t = 5391;
    public static const GL_SHININESS: int32_t = 5633;
    public static const GL_SHORT: int32_t = 5122;
    public static const GL_SMOOTH: int32_t = 7425;
    public static const GL_SMOOTH_LINE_WIDTH_RANGE: int32_t = 2850;
    public static const GL_SMOOTH_POINT_SIZE_RANGE: int32_t = 2834;
    public static const GL_SPECULAR: int32_t = 4610;
    public static const GL_SPOT_CUTOFF: int32_t = 4614;
    public static const GL_SPOT_DIRECTION: int32_t = 4612;
    public static const GL_SPOT_EXPONENT: int32_t = 4613;
    public static const GL_SRC_ALPHA: int32_t = 770;
    public static const GL_SRC_ALPHA_SATURATE: int32_t = 776;
    public static const GL_SRC_COLOR: int32_t = 768;
    public static const GL_STACK_OVERFLOW: int32_t = 1283;
    public static const GL_STACK_UNDERFLOW: int32_t = 1284;
    public static const GL_STENCIL_BITS: int32_t = 3415;
    public static const GL_STENCIL_BUFFER_BIT: int32_t = 1024;
    public static const GL_STENCIL_TEST: int32_t = 2960;
    public static const GL_SUBPIXEL_BITS: int32_t = 3408;
    public static const GL_TEXTURE: int32_t = 5890;
    public static const GL_TEXTURE_2D: int32_t = 3553;
    public static const GL_TEXTURE_COORD_ARRAY: int32_t = 32888;
    public static const GL_TEXTURE_ENV: int32_t = 8960;
    public static const GL_TEXTURE_ENV_COLOR: int32_t = 8705;
    public static const GL_TEXTURE_ENV_MODE: int32_t = 8704;
    public static const GL_TEXTURE_MAG_FILTER: int32_t = 10240;
    public static const GL_TEXTURE_MIN_FILTER: int32_t = 10241;
    public static const GL_TEXTURE_WRAP_S: int32_t = 10242;
    public static const GL_TEXTURE_WRAP_T: int32_t = 10243;
    public static const GL_TEXTURE0: int32_t = 33984;
    public static const GL_TEXTURE1: int32_t = 33985;
    public static const GL_TEXTURE2: int32_t = 33986;
    public static const GL_TEXTURE3: int32_t = 33987;
    public static const GL_TEXTURE4: int32_t = 33988;
    public static const GL_TEXTURE5: int32_t = 33989;
    public static const GL_TEXTURE6: int32_t = 33990;
    public static const GL_TEXTURE7: int32_t = 33991;
    public static const GL_TEXTURE8: int32_t = 33992;
    public static const GL_TEXTURE9: int32_t = 33993;
    public static const GL_TEXTURE10: int32_t = 33994;
    public static const GL_TEXTURE11: int32_t = 33995;
    public static const GL_TEXTURE12: int32_t = 33996;
    public static const GL_TEXTURE13: int32_t = 33997;
    public static const GL_TEXTURE14: int32_t = 33998;
    public static const GL_TEXTURE15: int32_t = 33999;
    public static const GL_TEXTURE16: int32_t = 34000;
    public static const GL_TEXTURE17: int32_t = 34001;
    public static const GL_TEXTURE18: int32_t = 34002;
    public static const GL_TEXTURE19: int32_t = 34003;
    public static const GL_TEXTURE20: int32_t = 34004;
    public static const GL_TEXTURE21: int32_t = 34005;
    public static const GL_TEXTURE22: int32_t = 34006;
    public static const GL_TEXTURE23: int32_t = 34007;
    public static const GL_TEXTURE24: int32_t = 34008;
    public static const GL_TEXTURE25: int32_t = 34009;
    public static const GL_TEXTURE26: int32_t = 34010;
    public static const GL_TEXTURE27: int32_t = 34011;
    public static const GL_TEXTURE28: int32_t = 34012;
    public static const GL_TEXTURE29: int32_t = 34013;
    public static const GL_TEXTURE30: int32_t = 34014;
    public static const GL_TEXTURE31: int32_t = 34015;
    public static const GL_TRIANGLE_FAN: int32_t = 6;
    public static const GL_TRIANGLE_STRIP: int32_t = 5;
    public static const GL_TRIANGLES: int32_t = 4;
    public static const GL_TRUE: int32_t = 1;
    public static const GL_UNPACK_ALIGNMENT: int32_t = 3317;
    public static const GL_UNSIGNED_BYTE: int32_t = 5121;
    public static const GL_UNSIGNED_SHORT: int32_t = 5123;
    public static const GL_UNSIGNED_SHORT_4_4_4_4: int32_t = 32819;
    public static const GL_UNSIGNED_SHORT_5_5_5_1: int32_t = 32820;
    public static const GL_UNSIGNED_SHORT_5_6_5: int32_t = 33635;
    public static const GL_VENDOR: int32_t = 7936;
    public static const GL_VERSION: int32_t = 7938;
    public static const GL_VERTEX_ARRAY: int32_t = 32884;
    public static const GL_XOR: int32_t = 5382;
    public static const GL_ZERO: int32_t = 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            }
        
class GL10: public GL {
        

    //Interfaces do not have static fields - public static const GL_ADD: int32_t = 260;

    //Interfaces do not have static fields - public static const GL_ALIASED_LINE_WIDTH_RANGE: int32_t = 33902;

    //Interfaces do not have static fields - public static const GL_ALIASED_POINT_SIZE_RANGE: int32_t = 33901;

    //Interfaces do not have static fields - public static const GL_ALPHA: int32_t = 6406;

    //Interfaces do not have static fields - public static const GL_ALPHA_BITS: int32_t = 3413;

    //Interfaces do not have static fields - public static const GL_ALPHA_TEST: int32_t = 3008;

    //Interfaces do not have static fields - public static const GL_ALWAYS: int32_t = 519;

    //Interfaces do not have static fields - public static const GL_AMBIENT: int32_t = 4608;

    //Interfaces do not have static fields - public static const GL_AMBIENT_AND_DIFFUSE: int32_t = 5634;

    //Interfaces do not have static fields - public static const GL_AND: int32_t = 5377;

    //Interfaces do not have static fields - public static const GL_AND_INVERTED: int32_t = 5380;

    //Interfaces do not have static fields - public static const GL_AND_REVERSE: int32_t = 5378;

    //Interfaces do not have static fields - public static const GL_BACK: int32_t = 1029;

    //Interfaces do not have static fields - public static const GL_BLEND: int32_t = 3042;

    //Interfaces do not have static fields - public static const GL_BLUE_BITS: int32_t = 3412;

    //Interfaces do not have static fields - public static const GL_BYTE: int32_t = 5120;

    //Interfaces do not have static fields - public static const GL_CCW: int32_t = 2305;

    //Interfaces do not have static fields - public static const GL_CLAMP_TO_EDGE: int32_t = 33071;

    //Interfaces do not have static fields - public static const GL_CLEAR: int32_t = 5376;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY: int32_t = 32886;

    //Interfaces do not have static fields - public static const GL_COLOR_BUFFER_BIT: int32_t = 16384;

    //Interfaces do not have static fields - public static const GL_COLOR_LOGIC_OP: int32_t = 3058;

    //Interfaces do not have static fields - public static const GL_COLOR_MATERIAL: int32_t = 2903;

    //Interfaces do not have static fields - public static const GL_COMPRESSED_TEXTURE_FORMATS: int32_t = 34467;

    //Interfaces do not have static fields - public static const GL_CONSTANT_ATTENUATION: int32_t = 4615;

    //Interfaces do not have static fields - public static const GL_COPY: int32_t = 5379;

    //Interfaces do not have static fields - public static const GL_COPY_INVERTED: int32_t = 5388;

    //Interfaces do not have static fields - public static const GL_CULL_FACE: int32_t = 2884;

    //Interfaces do not have static fields - public static const GL_CW: int32_t = 2304;

    //Interfaces do not have static fields - public static const GL_DECAL: int32_t = 8449;

    //Interfaces do not have static fields - public static const GL_DECR: int32_t = 7683;

    //Interfaces do not have static fields - public static const GL_DEPTH_BITS: int32_t = 3414;

    //Interfaces do not have static fields - public static const GL_DEPTH_BUFFER_BIT: int32_t = 256;

    //Interfaces do not have static fields - public static const GL_DEPTH_TEST: int32_t = 2929;

    //Interfaces do not have static fields - public static const GL_DIFFUSE: int32_t = 4609;

    //Interfaces do not have static fields - public static const GL_DITHER: int32_t = 3024;

    //Interfaces do not have static fields - public static const GL_DONT_CARE: int32_t = 4352;

    //Interfaces do not have static fields - public static const GL_DST_ALPHA: int32_t = 772;

    //Interfaces do not have static fields - public static const GL_DST_COLOR: int32_t = 774;

    //Interfaces do not have static fields - public static const GL_EMISSION: int32_t = 5632;

    //Interfaces do not have static fields - public static const GL_EQUAL: int32_t = 514;

    //Interfaces do not have static fields - public static const GL_EQUIV: int32_t = 5385;

    //Interfaces do not have static fields - public static const GL_EXP: int32_t = 2048;

    //Interfaces do not have static fields - public static const GL_EXP2: int32_t = 2049;

    //Interfaces do not have static fields - public static const GL_EXTENSIONS: int32_t = 7939;

    //Interfaces do not have static fields - public static const GL_FALSE: int32_t = 0;

    //Interfaces do not have static fields - public static const GL_FASTEST: int32_t = 4353;

    //Interfaces do not have static fields - public static const GL_FIXED: int32_t = 5132;

    //Interfaces do not have static fields - public static const GL_FLAT: int32_t = 7424;

    //Interfaces do not have static fields - public static const GL_FLOAT: int32_t = 5126;

    //Interfaces do not have static fields - public static const GL_FOG: int32_t = 2912;

    //Interfaces do not have static fields - public static const GL_FOG_COLOR: int32_t = 2918;

    //Interfaces do not have static fields - public static const GL_FOG_DENSITY: int32_t = 2914;

    //Interfaces do not have static fields - public static const GL_FOG_END: int32_t = 2916;

    //Interfaces do not have static fields - public static const GL_FOG_HINT: int32_t = 3156;

    //Interfaces do not have static fields - public static const GL_FOG_MODE: int32_t = 2917;

    //Interfaces do not have static fields - public static const GL_FOG_START: int32_t = 2915;

    //Interfaces do not have static fields - public static const GL_FRONT: int32_t = 1028;

    //Interfaces do not have static fields - public static const GL_FRONT_AND_BACK: int32_t = 1032;

    //Interfaces do not have static fields - public static const GL_GEQUAL: int32_t = 518;

    //Interfaces do not have static fields - public static const GL_GREATER: int32_t = 516;

    //Interfaces do not have static fields - public static const GL_GREEN_BITS: int32_t = 3411;

    //Interfaces do not have static fields - public static const GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES: int32_t = 35739;

    //Interfaces do not have static fields - public static const GL_IMPLEMENTATION_COLOR_READ_TYPE_OES: int32_t = 35738;

    //Interfaces do not have static fields - public static const GL_INCR: int32_t = 7682;

    //Interfaces do not have static fields - public static const GL_INVALID_ENUM: int32_t = 1280;

    //Interfaces do not have static fields - public static const GL_INVALID_OPERATION: int32_t = 1282;

    //Interfaces do not have static fields - public static const GL_INVALID_VALUE: int32_t = 1281;

    //Interfaces do not have static fields - public static const GL_INVERT: int32_t = 5386;

    //Interfaces do not have static fields - public static const GL_KEEP: int32_t = 7680;

    //Interfaces do not have static fields - public static const GL_LEQUAL: int32_t = 515;

    //Interfaces do not have static fields - public static const GL_LESS: int32_t = 513;

    //Interfaces do not have static fields - public static const GL_LIGHT_MODEL_AMBIENT: int32_t = 2899;

    //Interfaces do not have static fields - public static const GL_LIGHT_MODEL_TWO_SIDE: int32_t = 2898;

    //Interfaces do not have static fields - public static const GL_LIGHT0: int32_t = 16384;

    //Interfaces do not have static fields - public static const GL_LIGHT1: int32_t = 16385;

    //Interfaces do not have static fields - public static const GL_LIGHT2: int32_t = 16386;

    //Interfaces do not have static fields - public static const GL_LIGHT3: int32_t = 16387;

    //Interfaces do not have static fields - public static const GL_LIGHT4: int32_t = 16388;

    //Interfaces do not have static fields - public static const GL_LIGHT5: int32_t = 16389;

    //Interfaces do not have static fields - public static const GL_LIGHT6: int32_t = 16390;

    //Interfaces do not have static fields - public static const GL_LIGHT7: int32_t = 16391;

    //Interfaces do not have static fields - public static const GL_LIGHTING: int32_t = 2896;

    //Interfaces do not have static fields - public static const GL_LINE_LOOP: int32_t = 2;

    //Interfaces do not have static fields - public static const GL_LINE_SMOOTH: int32_t = 2848;

    //Interfaces do not have static fields - public static const GL_LINE_SMOOTH_HINT: int32_t = 3154;

    //Interfaces do not have static fields - public static const GL_LINE_STRIP: int32_t = 3;

    //Interfaces do not have static fields - public static const GL_LINEAR: int32_t = 9729;

    //Interfaces do not have static fields - public static const GL_LINEAR_ATTENUATION: int32_t = 4616;

    //Interfaces do not have static fields - public static const GL_LINEAR_MIPMAP_LINEAR: int32_t = 9987;

    //Interfaces do not have static fields - public static const GL_LINEAR_MIPMAP_NEAREST: int32_t = 9985;

    //Interfaces do not have static fields - public static const GL_LINES: int32_t = 1;

    //Interfaces do not have static fields - public static const GL_LUMINANCE: int32_t = 6409;

    //Interfaces do not have static fields - public static const GL_LUMINANCE_ALPHA: int32_t = 6410;

    //Interfaces do not have static fields - public static const GL_MAX_ELEMENTS_INDICES: int32_t = 33001;

    //Interfaces do not have static fields - public static const GL_MAX_ELEMENTS_VERTICES: int32_t = 33000;

    //Interfaces do not have static fields - public static const GL_MAX_LIGHTS: int32_t = 3377;

    //Interfaces do not have static fields - public static const GL_MAX_MODELVIEW_STACK_DEPTH: int32_t = 3382;

    //Interfaces do not have static fields - public static const GL_MAX_PROJECTION_STACK_DEPTH: int32_t = 3384;

    //Interfaces do not have static fields - public static const GL_MAX_TEXTURE_SIZE: int32_t = 3379;

    //Interfaces do not have static fields - public static const GL_MAX_TEXTURE_STACK_DEPTH: int32_t = 3385;

    //Interfaces do not have static fields - public static const GL_MAX_TEXTURE_UNITS: int32_t = 34018;

    //Interfaces do not have static fields - public static const GL_MAX_VIEWPORT_DIMS: int32_t = 3386;

    //Interfaces do not have static fields - public static const GL_MODELVIEW: int32_t = 5888;

    //Interfaces do not have static fields - public static const GL_MODULATE: int32_t = 8448;

    //Interfaces do not have static fields - public static const GL_MULTISAMPLE: int32_t = 32925;

    //Interfaces do not have static fields - public static const GL_NAND: int32_t = 5390;

    //Interfaces do not have static fields - public static const GL_NEAREST: int32_t = 9728;

    //Interfaces do not have static fields - public static const GL_NEAREST_MIPMAP_LINEAR: int32_t = 9986;

    //Interfaces do not have static fields - public static const GL_NEAREST_MIPMAP_NEAREST: int32_t = 9984;

    //Interfaces do not have static fields - public static const GL_NEVER: int32_t = 512;

    //Interfaces do not have static fields - public static const GL_NICEST: int32_t = 4354;

    //Interfaces do not have static fields - public static const GL_NO_ERROR: int32_t = 0;

    //Interfaces do not have static fields - public static const GL_NOOP: int32_t = 5381;

    //Interfaces do not have static fields - public static const GL_NOR: int32_t = 5384;

    //Interfaces do not have static fields - public static const GL_NORMAL_ARRAY: int32_t = 32885;

    //Interfaces do not have static fields - public static const GL_NORMALIZE: int32_t = 2977;

    //Interfaces do not have static fields - public static const GL_NOTEQUAL: int32_t = 517;

    //Interfaces do not have static fields - public static const GL_NUM_COMPRESSED_TEXTURE_FORMATS: int32_t = 34466;

    //Interfaces do not have static fields - public static const GL_ONE: int32_t = 1;

    //Interfaces do not have static fields - public static const GL_ONE_MINUS_DST_ALPHA: int32_t = 773;

    //Interfaces do not have static fields - public static const GL_ONE_MINUS_DST_COLOR: int32_t = 775;

    //Interfaces do not have static fields - public static const GL_ONE_MINUS_SRC_ALPHA: int32_t = 771;

    //Interfaces do not have static fields - public static const GL_ONE_MINUS_SRC_COLOR: int32_t = 769;

    //Interfaces do not have static fields - public static const GL_OR: int32_t = 5383;

    //Interfaces do not have static fields - public static const GL_OR_INVERTED: int32_t = 5389;

    //Interfaces do not have static fields - public static const GL_OR_REVERSE: int32_t = 5387;

    //Interfaces do not have static fields - public static const GL_OUT_OF_MEMORY: int32_t = 1285;

    //Interfaces do not have static fields - public static const GL_PACK_ALIGNMENT: int32_t = 3333;

    //Interfaces do not have static fields - public static const GL_PALETTE4_R5_G6_B5_OES: int32_t = 35730;

    //Interfaces do not have static fields - public static const GL_PALETTE4_RGB5_A1_OES: int32_t = 35732;

    //Interfaces do not have static fields - public static const GL_PALETTE4_RGB8_OES: int32_t = 35728;

    //Interfaces do not have static fields - public static const GL_PALETTE4_RGBA4_OES: int32_t = 35731;

    //Interfaces do not have static fields - public static const GL_PALETTE4_RGBA8_OES: int32_t = 35729;

    //Interfaces do not have static fields - public static const GL_PALETTE8_R5_G6_B5_OES: int32_t = 35735;

    //Interfaces do not have static fields - public static const GL_PALETTE8_RGB5_A1_OES: int32_t = 35737;

    //Interfaces do not have static fields - public static const GL_PALETTE8_RGB8_OES: int32_t = 35733;

    //Interfaces do not have static fields - public static const GL_PALETTE8_RGBA4_OES: int32_t = 35736;

    //Interfaces do not have static fields - public static const GL_PALETTE8_RGBA8_OES: int32_t = 35734;

    //Interfaces do not have static fields - public static const GL_PERSPECTIVE_CORRECTION_HINT: int32_t = 3152;

    //Interfaces do not have static fields - public static const GL_POINT_SMOOTH: int32_t = 2832;

    //Interfaces do not have static fields - public static const GL_POINT_SMOOTH_HINT: int32_t = 3153;

    //Interfaces do not have static fields - public static const GL_POINTS: int32_t = 0;

    //Interfaces do not have static fields - public static const GL_POINT_FADE_THRESHOLD_SIZE: int32_t = 33064;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE: int32_t = 2833;

    //Interfaces do not have static fields - public static const GL_POLYGON_OFFSET_FILL: int32_t = 32823;

    //Interfaces do not have static fields - public static const GL_POLYGON_SMOOTH_HINT: int32_t = 3155;

    //Interfaces do not have static fields - public static const GL_POSITION: int32_t = 4611;

    //Interfaces do not have static fields - public static const GL_PROJECTION: int32_t = 5889;

    //Interfaces do not have static fields - public static const GL_QUADRATIC_ATTENUATION: int32_t = 4617;

    //Interfaces do not have static fields - public static const GL_RED_BITS: int32_t = 3410;

    //Interfaces do not have static fields - public static const GL_RENDERER: int32_t = 7937;

    //Interfaces do not have static fields - public static const GL_REPEAT: int32_t = 10497;

    //Interfaces do not have static fields - public static const GL_REPLACE: int32_t = 7681;

    //Interfaces do not have static fields - public static const GL_RESCALE_NORMAL: int32_t = 32826;

    //Interfaces do not have static fields - public static const GL_RGB: int32_t = 6407;

    //Interfaces do not have static fields - public static const GL_RGBA: int32_t = 6408;

    //Interfaces do not have static fields - public static const GL_SAMPLE_ALPHA_TO_COVERAGE: int32_t = 32926;

    //Interfaces do not have static fields - public static const GL_SAMPLE_ALPHA_TO_ONE: int32_t = 32927;

    //Interfaces do not have static fields - public static const GL_SAMPLE_COVERAGE: int32_t = 32928;

    //Interfaces do not have static fields - public static const GL_SCISSOR_TEST: int32_t = 3089;

    //Interfaces do not have static fields - public static const GL_SET: int32_t = 5391;

    //Interfaces do not have static fields - public static const GL_SHININESS: int32_t = 5633;

    //Interfaces do not have static fields - public static const GL_SHORT: int32_t = 5122;

    //Interfaces do not have static fields - public static const GL_SMOOTH: int32_t = 7425;

    //Interfaces do not have static fields - public static const GL_SMOOTH_LINE_WIDTH_RANGE: int32_t = 2850;

    //Interfaces do not have static fields - public static const GL_SMOOTH_POINT_SIZE_RANGE: int32_t = 2834;

    //Interfaces do not have static fields - public static const GL_SPECULAR: int32_t = 4610;

    //Interfaces do not have static fields - public static const GL_SPOT_CUTOFF: int32_t = 4614;

    //Interfaces do not have static fields - public static const GL_SPOT_DIRECTION: int32_t = 4612;

    //Interfaces do not have static fields - public static const GL_SPOT_EXPONENT: int32_t = 4613;

    //Interfaces do not have static fields - public static const GL_SRC_ALPHA: int32_t = 770;

    //Interfaces do not have static fields - public static const GL_SRC_ALPHA_SATURATE: int32_t = 776;

    //Interfaces do not have static fields - public static const GL_SRC_COLOR: int32_t = 768;

    //Interfaces do not have static fields - public static const GL_STACK_OVERFLOW: int32_t = 1283;

    //Interfaces do not have static fields - public static const GL_STACK_UNDERFLOW: int32_t = 1284;

    //Interfaces do not have static fields - public static const GL_STENCIL_BITS: int32_t = 3415;

    //Interfaces do not have static fields - public static const GL_STENCIL_BUFFER_BIT: int32_t = 1024;

    //Interfaces do not have static fields - public static const GL_STENCIL_TEST: int32_t = 2960;

    //Interfaces do not have static fields - public static const GL_SUBPIXEL_BITS: int32_t = 3408;

    //Interfaces do not have static fields - public static const GL_TEXTURE: int32_t = 5890;

    //Interfaces do not have static fields - public static const GL_TEXTURE_2D: int32_t = 3553;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY: int32_t = 32888;

    //Interfaces do not have static fields - public static const GL_TEXTURE_ENV: int32_t = 8960;

    //Interfaces do not have static fields - public static const GL_TEXTURE_ENV_COLOR: int32_t = 8705;

    //Interfaces do not have static fields - public static const GL_TEXTURE_ENV_MODE: int32_t = 8704;

    //Interfaces do not have static fields - public static const GL_TEXTURE_MAG_FILTER: int32_t = 10240;

    //Interfaces do not have static fields - public static const GL_TEXTURE_MIN_FILTER: int32_t = 10241;

    //Interfaces do not have static fields - public static const GL_TEXTURE_WRAP_S: int32_t = 10242;

    //Interfaces do not have static fields - public static const GL_TEXTURE_WRAP_T: int32_t = 10243;

    //Interfaces do not have static fields - public static const GL_TEXTURE0: int32_t = 33984;

    //Interfaces do not have static fields - public static const GL_TEXTURE1: int32_t = 33985;

    //Interfaces do not have static fields - public static const GL_TEXTURE2: int32_t = 33986;

    //Interfaces do not have static fields - public static const GL_TEXTURE3: int32_t = 33987;

    //Interfaces do not have static fields - public static const GL_TEXTURE4: int32_t = 33988;

    //Interfaces do not have static fields - public static const GL_TEXTURE5: int32_t = 33989;

    //Interfaces do not have static fields - public static const GL_TEXTURE6: int32_t = 33990;

    //Interfaces do not have static fields - public static const GL_TEXTURE7: int32_t = 33991;

    //Interfaces do not have static fields - public static const GL_TEXTURE8: int32_t = 33992;

    //Interfaces do not have static fields - public static const GL_TEXTURE9: int32_t = 33993;

    //Interfaces do not have static fields - public static const GL_TEXTURE10: int32_t = 33994;

    //Interfaces do not have static fields - public static const GL_TEXTURE11: int32_t = 33995;

    //Interfaces do not have static fields - public static const GL_TEXTURE12: int32_t = 33996;

    //Interfaces do not have static fields - public static const GL_TEXTURE13: int32_t = 33997;

    //Interfaces do not have static fields - public static const GL_TEXTURE14: int32_t = 33998;

    //Interfaces do not have static fields - public static const GL_TEXTURE15: int32_t = 33999;

    //Interfaces do not have static fields - public static const GL_TEXTURE16: int32_t = 34000;

    //Interfaces do not have static fields - public static const GL_TEXTURE17: int32_t = 34001;

    //Interfaces do not have static fields - public static const GL_TEXTURE18: int32_t = 34002;

    //Interfaces do not have static fields - public static const GL_TEXTURE19: int32_t = 34003;

    //Interfaces do not have static fields - public static const GL_TEXTURE20: int32_t = 34004;

    //Interfaces do not have static fields - public static const GL_TEXTURE21: int32_t = 34005;

    //Interfaces do not have static fields - public static const GL_TEXTURE22: int32_t = 34006;

    //Interfaces do not have static fields - public static const GL_TEXTURE23: int32_t = 34007;

    //Interfaces do not have static fields - public static const GL_TEXTURE24: int32_t = 34008;

    //Interfaces do not have static fields - public static const GL_TEXTURE25: int32_t = 34009;

    //Interfaces do not have static fields - public static const GL_TEXTURE26: int32_t = 34010;

    //Interfaces do not have static fields - public static const GL_TEXTURE27: int32_t = 34011;

    //Interfaces do not have static fields - public static const GL_TEXTURE28: int32_t = 34012;

    //Interfaces do not have static fields - public static const GL_TEXTURE29: int32_t = 34013;

    //Interfaces do not have static fields - public static const GL_TEXTURE30: int32_t = 34014;

    //Interfaces do not have static fields - public static const GL_TEXTURE31: int32_t = 34015;

    //Interfaces do not have static fields - public static const GL_TRIANGLE_FAN: int32_t = 6;

    //Interfaces do not have static fields - public static const GL_TRIANGLE_STRIP: int32_t = 5;

    //Interfaces do not have static fields - public static const GL_TRIANGLES: int32_t = 4;

    //Interfaces do not have static fields - public static const GL_TRUE: int32_t = 1;

    //Interfaces do not have static fields - public static const GL_UNPACK_ALIGNMENT: int32_t = 3317;

    //Interfaces do not have static fields - public static const GL_UNSIGNED_BYTE: int32_t = 5121;

    //Interfaces do not have static fields - public static const GL_UNSIGNED_SHORT: int32_t = 5123;

    //Interfaces do not have static fields - public static const GL_UNSIGNED_SHORT_4_4_4_4: int32_t = 32819;

    //Interfaces do not have static fields - public static const GL_UNSIGNED_SHORT_5_5_5_1: int32_t = 32820;

    //Interfaces do not have static fields - public static const GL_UNSIGNED_SHORT_5_6_5: int32_t = 33635;

    //Interfaces do not have static fields - public static const GL_VENDOR: int32_t = 7936;

    //Interfaces do not have static fields - public static const GL_VERSION: int32_t = 7938;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY: int32_t = 32884;

    //Interfaces do not have static fields - public static const GL_XOR: int32_t = 5382;

    //Interfaces do not have static fields - public static const GL_ZERO: int32_t = 0;

    glActiveTexture(int32_t texture);

    glAlphaFunc(int32_t func, float ref);

    glBindTexture(int32_t target, int32_t texture);

    glBlendFunc(int32_t sfactor, int32_t dfactor);

    glClear(int32_t mask);

    glClearColor(float red, float green, float blue, float alpha);

    glClearDepthf(float depth);

    glClearStencil(int32_t s);

    glClientActiveTexture(int32_t texture);

    glColor4f(float red, float green, float blue, float alpha);

    glColorMask(bool red, bool green, bool blue, bool alpha);

    glColorPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer data);

    glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer data);

    glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

    glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

    glCullFace(int32_t mode);

    glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    glDeleteTextures(int32_t n, IntBuffer textures);

    glDepthFunc(int32_t func);

    glDepthMask(bool flag);

    glDepthRangef(float zNear, float zFar);

    glDisable(int32_t cap);

    glDisableClientState(int32_t array);

    glDrawArrays(int32_t mode, int32_t first, int32_t count);

    glDrawElements(int32_t mode, int32_t count, int32_t type, Buffer indices);

    glEnable(int32_t cap);

    glEnableClientState(int32_t array);

    glFinish();

    glFlush();

    glFogf(int32_t pname, float param);

    glFogfv(int32_t pname, std::vector<float> params, int32_t offset);

    glFogfv(int32_t pname, FloatBuffer params);

    glFrontFace(int32_t mode);

    glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar);

    glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    glGenTextures(int32_t n, IntBuffer textures);

    int32_t glGetError();

    glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    glGetIntegerv(int32_t pname, IntBuffer params);

    string glGetString(int32_t name);

    glHint(int32_t target, int32_t mode);

    glLightModelf(int32_t pname, float param);

    glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset);

    glLightModelfv(int32_t pname, FloatBuffer params);

    glLightf(int32_t light, int32_t pname, float param);

    glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    glLightfv(int32_t light, int32_t pname, FloatBuffer params);

    glLineWidth(float width);

    glLoadIdentity();

    glLoadMatrixf(std::vector<float> m, int32_t offset);

    glLoadMatrixf(FloatBuffer m);

    glLogicOp(int32_t opcode);

    glMaterialf(int32_t face, int32_t pname, float param);

    glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    glMaterialfv(int32_t face, int32_t pname, FloatBuffer params);

    glMatrixMode(int32_t mode);

    glMultMatrixf(std::vector<float> m, int32_t offset);

    glMultMatrixf(FloatBuffer m);

    glMultiTexCoord4f(int32_t target, float s, float t, float r, float q);

    glNormal3f(float nx, float ny, float nz);

    glNormalPointer(int32_t type, int32_t stride, Buffer pointer);

    glOrthof(float left, float right, float bottom, float top, float zNear, float zFar);

    glPixelStorei(int32_t pname, int32_t param);

    glPointSize(float size);

    glPolygonOffset(float factor, float units);

    glPopMatrix();

    glPushMatrix();

    glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels);

    glRotatef(float angle, float x, float y, float z);

    glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z);

    glSampleCoverage(float value, bool invert);

    glScalef(float x, float y, float z);

    glScalex(int32_t x, int32_t y, int32_t z);

    glScissor(int32_t x, int32_t y, int32_t width, int32_t height);

    glShadeModel(int32_t mode);

    glStencilFunc(int32_t func, int32_t ref, int32_t mask);

    glStencilMask(int32_t mask);

    glStencilOp(int32_t fail, int32_t zfail, int32_t zpass);

    glTexCoordPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    glTexEnvf(int32_t target, int32_t pname, float param);

    glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    glTexEnvfv(int32_t target, int32_t pname, FloatBuffer params);

    glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer pixels);

    glTexParameterf(int32_t target, int32_t pname, float param);

    glTexParameteri(int32_t target, int32_t pname, int32_t param);

    glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels);

    glTranslatef(float x, float y, float z);

    glVertexPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    glViewport(int32_t x, int32_t y, int32_t width, int32_t height);

    glBegin(int32_t i);

    glEnd();

    glVertex3f(float f, float f2, float f3);

    glPolygonMode(int32_t i, int32_t i1);

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
