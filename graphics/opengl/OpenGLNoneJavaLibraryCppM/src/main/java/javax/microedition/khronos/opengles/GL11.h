
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H

#include <java/nio/Buffer.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <java/nio/IntBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL10.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL11I {
        
    public static const GL_ACTIVE_TEXTURE: int32_t = 34016;
    public static const GL_ADD_SIGNED: int32_t = 34164;
    public static const GL_ALPHA_SCALE: int32_t = 3356;
    public static const GL_ALPHA_TEST_FUNC: int32_t = 3009;
    public static const GL_ALPHA_TEST_REF: int32_t = 3010;
    public static const GL_ARRAY_BUFFER: int32_t = 34962;
    public static const GL_ARRAY_BUFFER_BINDING: int32_t = 34964;
    public static const GL_BLEND_DST: int32_t = 3040;
    public static const GL_BLEND_SRC: int32_t = 3041;
    public static const GL_BUFFER_ACCESS: int32_t = 35003;
    public static const GL_BUFFER_SIZE: int32_t = 34660;
    public static const GL_BUFFER_USAGE: int32_t = 34661;
    public static const GL_CLIENT_ACTIVE_TEXTURE: int32_t = 34017;
    public static const GL_CLIP_PLANE0: int32_t = 12288;
    public static const GL_CLIP_PLANE1: int32_t = 12289;
    public static const GL_CLIP_PLANE2: int32_t = 12290;
    public static const GL_CLIP_PLANE3: int32_t = 12291;
    public static const GL_CLIP_PLANE4: int32_t = 12292;
    public static const GL_CLIP_PLANE5: int32_t = 12293;
    public static const GL_COLOR_ARRAY_BUFFER_BINDING: int32_t = 34968;
    public static const GL_COLOR_ARRAY_POINTER: int32_t = 32912;
    public static const GL_COLOR_ARRAY_SIZE: int32_t = 32897;
    public static const GL_COLOR_ARRAY_STRIDE: int32_t = 32899;
    public static const GL_COLOR_ARRAY_TYPE: int32_t = 32898;
    public static const GL_COLOR_CLEAR_VALUE: int32_t = 3106;
    public static const GL_COLOR_WRITEMASK: int32_t = 3107;
    public static const GL_COMBINE: int32_t = 34160;
    public static const GL_COMBINE_ALPHA: int32_t = 34162;
    public static const GL_COMBINE_RGB: int32_t = 34161;
    public static const GL_CONSTANT: int32_t = 34166;
    public static const GL_COORD_REPLACE_OES: int32_t = 34914;
    public static const GL_CULL_FACE_MODE: int32_t = 2885;
    public static const GL_CURRENT_COLOR: int32_t = 2816;
    public static const GL_CURRENT_NORMAL: int32_t = 2818;
    public static const GL_CURRENT_TEXTURE_COORDS: int32_t = 2819;
    public static const GL_DEPTH_CLEAR_VALUE: int32_t = 2931;
    public static const GL_DEPTH_FUNC: int32_t = 2932;
    public static const GL_DEPTH_RANGE: int32_t = 2928;
    public static const GL_DEPTH_WRITEMASK: int32_t = 2930;
    public static const GL_DOT3_RGB: int32_t = 34478;
    public static const GL_DOT3_RGBA: int32_t = 34479;
    public static const GL_DYNAMIC_DRAW: int32_t = 35048;
    public static const GL_ELEMENT_ARRAY_BUFFER: int32_t = 34963;
    public static const GL_ELEMENT_ARRAY_BUFFER_BINDING: int32_t = 34965;
    public static const GL_FRONT_FACE: int32_t = 2886;
    public static const GL_GENERATE_MIPMAP: int32_t = 33169;
    public static const GL_GENERATE_MIPMAP_HINT: int32_t = 33170;
    public static const GL_INTERPOLATE: int32_t = 34165;
    public static const GL_LINE_WIDTH: int32_t = 2849;
    public static const GL_LOGIC_OP_MODE: int32_t = 3056;
    public static const GL_MATRIX_MODE: int32_t = 2976;
    public static const GL_MAX_CLIP_PLANES: int32_t = 3378;
    public static const GL_MODELVIEW_MATRIX: int32_t = 2982;
    public static const GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35213;
    public static const GL_MODELVIEW_STACK_DEPTH: int32_t = 2979;
    public static const GL_NORMAL_ARRAY_BUFFER_BINDING: int32_t = 34967;
    public static const GL_NORMAL_ARRAY_POINTER: int32_t = 32911;
    public static const GL_NORMAL_ARRAY_STRIDE: int32_t = 32895;
    public static const GL_NORMAL_ARRAY_TYPE: int32_t = 32894;
    public static const GL_OPERAND0_ALPHA: int32_t = 34200;
    public static const GL_OPERAND0_RGB: int32_t = 34192;
    public static const GL_OPERAND1_ALPHA: int32_t = 34201;
    public static const GL_OPERAND1_RGB: int32_t = 34193;
    public static const GL_OPERAND2_ALPHA: int32_t = 34202;
    public static const GL_OPERAND2_RGB: int32_t = 34194;
    public static const GL_POINT_DISTANCE_ATTENUATION: int32_t = 33065;
    public static const GL_POINT_FADE_THRESHOLD_SIZE: int32_t = 33064;
    public static const GL_POINT_SIZE: int32_t = 2833;
    public static const GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES: int32_t = 35743;
    public static const GL_POINT_SIZE_ARRAY_OES: int32_t = 35740;
    public static const GL_POINT_SIZE_ARRAY_POINTER_OES: int32_t = 35212;
    public static const GL_POINT_SIZE_ARRAY_STRIDE_OES: int32_t = 35211;
    public static const GL_POINT_SIZE_ARRAY_TYPE_OES: int32_t = 35210;
    public static const GL_POINT_SIZE_MAX: int32_t = 33063;
    public static const GL_POINT_SIZE_MIN: int32_t = 33062;
    public static const GL_POINT_SPRITE_OES: int32_t = 34913;
    public static const GL_POLYGON_OFFSET_FACTOR: int32_t = 32824;
    public static const GL_POLYGON_OFFSET_UNITS: int32_t = 10752;
    public static const GL_PREVIOUS: int32_t = 34168;
    public static const GL_PRIMARY_COLOR: int32_t = 34167;
    public static const GL_PROJECTION_MATRIX: int32_t = 2983;
    public static const GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35214;
    public static const GL_PROJECTION_STACK_DEPTH: int32_t = 2980;
    public static const GL_RGB_SCALE: int32_t = 34163;
    public static const GL_SAMPLE_BUFFERS: int32_t = 32936;
    public static const GL_SAMPLE_COVERAGE_INVERT: int32_t = 32939;
    public static const GL_SAMPLE_COVERAGE_VALUE: int32_t = 32938;
    public static const GL_SAMPLES: int32_t = 32937;
    public static const GL_SCISSOR_BOX: int32_t = 3088;
    public static const GL_SHADE_MODEL: int32_t = 2900;
    public static const GL_SRC0_ALPHA: int32_t = 34184;
    public static const GL_SRC0_RGB: int32_t = 34176;
    public static const GL_SRC1_ALPHA: int32_t = 34185;
    public static const GL_SRC1_RGB: int32_t = 34177;
    public static const GL_SRC2_ALPHA: int32_t = 34186;
    public static const GL_SRC2_RGB: int32_t = 34178;
    public static const GL_STATIC_DRAW: int32_t = 35044;
    public static const GL_STENCIL_CLEAR_VALUE: int32_t = 2961;
    public static const GL_STENCIL_FAIL: int32_t = 2964;
    public static const GL_STENCIL_FUNC: int32_t = 2962;
    public static const GL_STENCIL_PASS_DEPTH_FAIL: int32_t = 2965;
    public static const GL_STENCIL_PASS_DEPTH_PASS: int32_t = 2966;
    public static const GL_STENCIL_REF: int32_t = 2967;
    public static const GL_STENCIL_VALUE_MASK: int32_t = 2963;
    public static const GL_STENCIL_WRITEMASK: int32_t = 2968;
    public static const GL_SUBTRACT: int32_t = 34023;
    public static const GL_TEXTURE_BINDING_2D: int32_t = 32873;
    public static const GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING: int32_t = 34970;
    public static const GL_TEXTURE_COORD_ARRAY_POINTER: int32_t = 32914;
    public static const GL_TEXTURE_COORD_ARRAY_SIZE: int32_t = 32904;
    public static const GL_TEXTURE_COORD_ARRAY_STRIDE: int32_t = 32906;
    public static const GL_TEXTURE_COORD_ARRAY_TYPE: int32_t = 32905;
    public static const GL_TEXTURE_MATRIX: int32_t = 2984;
    public static const GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35215;
    public static const GL_TEXTURE_STACK_DEPTH: int32_t = 2981;
    public static const GL_VERTEX_ARRAY_BUFFER_BINDING: int32_t = 34966;
    public static const GL_VERTEX_ARRAY_POINTER: int32_t = 32910;
    public static const GL_VERTEX_ARRAY_SIZE: int32_t = 32890;
    public static const GL_VERTEX_ARRAY_STRIDE: int32_t = 32892;
    public static const GL_VERTEX_ARRAY_TYPE: int32_t = 32891;
    public static const GL_VIEWPORT: int32_t = 2978;
    public static const GL_WRITE_ONLY: int32_t = 35001;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            }
        
class GL11: public GL10 {
        

    //Interfaces do not have static fields - public static const GL_ACTIVE_TEXTURE: int32_t = 34016;

    //Interfaces do not have static fields - public static const GL_ADD_SIGNED: int32_t = 34164;

    //Interfaces do not have static fields - public static const GL_ALPHA_SCALE: int32_t = 3356;

    //Interfaces do not have static fields - public static const GL_ALPHA_TEST_FUNC: int32_t = 3009;

    //Interfaces do not have static fields - public static const GL_ALPHA_TEST_REF: int32_t = 3010;

    //Interfaces do not have static fields - public static const GL_ARRAY_BUFFER: int32_t = 34962;

    //Interfaces do not have static fields - public static const GL_ARRAY_BUFFER_BINDING: int32_t = 34964;

    //Interfaces do not have static fields - public static const GL_BLEND_DST: int32_t = 3040;

    //Interfaces do not have static fields - public static const GL_BLEND_SRC: int32_t = 3041;

    //Interfaces do not have static fields - public static const GL_BUFFER_ACCESS: int32_t = 35003;

    //Interfaces do not have static fields - public static const GL_BUFFER_SIZE: int32_t = 34660;

    //Interfaces do not have static fields - public static const GL_BUFFER_USAGE: int32_t = 34661;

    //Interfaces do not have static fields - public static const GL_CLIENT_ACTIVE_TEXTURE: int32_t = 34017;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE0: int32_t = 12288;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE1: int32_t = 12289;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE2: int32_t = 12290;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE3: int32_t = 12291;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE4: int32_t = 12292;

    //Interfaces do not have static fields - public static const GL_CLIP_PLANE5: int32_t = 12293;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY_BUFFER_BINDING: int32_t = 34968;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY_POINTER: int32_t = 32912;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY_SIZE: int32_t = 32897;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY_STRIDE: int32_t = 32899;

    //Interfaces do not have static fields - public static const GL_COLOR_ARRAY_TYPE: int32_t = 32898;

    //Interfaces do not have static fields - public static const GL_COLOR_CLEAR_VALUE: int32_t = 3106;

    //Interfaces do not have static fields - public static const GL_COLOR_WRITEMASK: int32_t = 3107;

    //Interfaces do not have static fields - public static const GL_COMBINE: int32_t = 34160;

    //Interfaces do not have static fields - public static const GL_COMBINE_ALPHA: int32_t = 34162;

    //Interfaces do not have static fields - public static const GL_COMBINE_RGB: int32_t = 34161;

    //Interfaces do not have static fields - public static const GL_CONSTANT: int32_t = 34166;

    //Interfaces do not have static fields - public static const GL_COORD_REPLACE_OES: int32_t = 34914;

    //Interfaces do not have static fields - public static const GL_CULL_FACE_MODE: int32_t = 2885;

    //Interfaces do not have static fields - public static const GL_CURRENT_COLOR: int32_t = 2816;

    //Interfaces do not have static fields - public static const GL_CURRENT_NORMAL: int32_t = 2818;

    //Interfaces do not have static fields - public static const GL_CURRENT_TEXTURE_COORDS: int32_t = 2819;

    //Interfaces do not have static fields - public static const GL_DEPTH_CLEAR_VALUE: int32_t = 2931;

    //Interfaces do not have static fields - public static const GL_DEPTH_FUNC: int32_t = 2932;

    //Interfaces do not have static fields - public static const GL_DEPTH_RANGE: int32_t = 2928;

    //Interfaces do not have static fields - public static const GL_DEPTH_WRITEMASK: int32_t = 2930;

    //Interfaces do not have static fields - public static const GL_DOT3_RGB: int32_t = 34478;

    //Interfaces do not have static fields - public static const GL_DOT3_RGBA: int32_t = 34479;

    //Interfaces do not have static fields - public static const GL_DYNAMIC_DRAW: int32_t = 35048;

    //Interfaces do not have static fields - public static const GL_ELEMENT_ARRAY_BUFFER: int32_t = 34963;

    //Interfaces do not have static fields - public static const GL_ELEMENT_ARRAY_BUFFER_BINDING: int32_t = 34965;

    //Interfaces do not have static fields - public static const GL_FRONT_FACE: int32_t = 2886;

    //Interfaces do not have static fields - public static const GL_GENERATE_MIPMAP: int32_t = 33169;

    //Interfaces do not have static fields - public static const GL_GENERATE_MIPMAP_HINT: int32_t = 33170;

    //Interfaces do not have static fields - public static const GL_INTERPOLATE: int32_t = 34165;

    //Interfaces do not have static fields - public static const GL_LINE_WIDTH: int32_t = 2849;

    //Interfaces do not have static fields - public static const GL_LOGIC_OP_MODE: int32_t = 3056;

    //Interfaces do not have static fields - public static const GL_MATRIX_MODE: int32_t = 2976;

    //Interfaces do not have static fields - public static const GL_MAX_CLIP_PLANES: int32_t = 3378;

    //Interfaces do not have static fields - public static const GL_MODELVIEW_MATRIX: int32_t = 2982;

    //Interfaces do not have static fields - public static const GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35213;

    //Interfaces do not have static fields - public static const GL_MODELVIEW_STACK_DEPTH: int32_t = 2979;

    //Interfaces do not have static fields - public static const GL_NORMAL_ARRAY_BUFFER_BINDING: int32_t = 34967;

    //Interfaces do not have static fields - public static const GL_NORMAL_ARRAY_POINTER: int32_t = 32911;

    //Interfaces do not have static fields - public static const GL_NORMAL_ARRAY_STRIDE: int32_t = 32895;

    //Interfaces do not have static fields - public static const GL_NORMAL_ARRAY_TYPE: int32_t = 32894;

    //Interfaces do not have static fields - public static const GL_OPERAND0_ALPHA: int32_t = 34200;

    //Interfaces do not have static fields - public static const GL_OPERAND0_RGB: int32_t = 34192;

    //Interfaces do not have static fields - public static const GL_OPERAND1_ALPHA: int32_t = 34201;

    //Interfaces do not have static fields - public static const GL_OPERAND1_RGB: int32_t = 34193;

    //Interfaces do not have static fields - public static const GL_OPERAND2_ALPHA: int32_t = 34202;

    //Interfaces do not have static fields - public static const GL_OPERAND2_RGB: int32_t = 34194;

    //Interfaces do not have static fields - public static const GL_POINT_DISTANCE_ATTENUATION: int32_t = 33065;

    //Interfaces do not have static fields - public static const GL_POINT_FADE_THRESHOLD_SIZE: int32_t = 33064;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE: int32_t = 2833;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES: int32_t = 35743;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_ARRAY_OES: int32_t = 35740;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_ARRAY_POINTER_OES: int32_t = 35212;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_ARRAY_STRIDE_OES: int32_t = 35211;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_ARRAY_TYPE_OES: int32_t = 35210;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_MAX: int32_t = 33063;

    //Interfaces do not have static fields - public static const GL_POINT_SIZE_MIN: int32_t = 33062;

    //Interfaces do not have static fields - public static const GL_POINT_SPRITE_OES: int32_t = 34913;

    //Interfaces do not have static fields - public static const GL_POLYGON_OFFSET_FACTOR: int32_t = 32824;

    //Interfaces do not have static fields - public static const GL_POLYGON_OFFSET_UNITS: int32_t = 10752;

    //Interfaces do not have static fields - public static const GL_PREVIOUS: int32_t = 34168;

    //Interfaces do not have static fields - public static const GL_PRIMARY_COLOR: int32_t = 34167;

    //Interfaces do not have static fields - public static const GL_PROJECTION_MATRIX: int32_t = 2983;

    //Interfaces do not have static fields - public static const GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35214;

    //Interfaces do not have static fields - public static const GL_PROJECTION_STACK_DEPTH: int32_t = 2980;

    //Interfaces do not have static fields - public static const GL_RGB_SCALE: int32_t = 34163;

    //Interfaces do not have static fields - public static const GL_SAMPLE_BUFFERS: int32_t = 32936;

    //Interfaces do not have static fields - public static const GL_SAMPLE_COVERAGE_INVERT: int32_t = 32939;

    //Interfaces do not have static fields - public static const GL_SAMPLE_COVERAGE_VALUE: int32_t = 32938;

    //Interfaces do not have static fields - public static const GL_SAMPLES: int32_t = 32937;

    //Interfaces do not have static fields - public static const GL_SCISSOR_BOX: int32_t = 3088;

    //Interfaces do not have static fields - public static const GL_SHADE_MODEL: int32_t = 2900;

    //Interfaces do not have static fields - public static const GL_SRC0_ALPHA: int32_t = 34184;

    //Interfaces do not have static fields - public static const GL_SRC0_RGB: int32_t = 34176;

    //Interfaces do not have static fields - public static const GL_SRC1_ALPHA: int32_t = 34185;

    //Interfaces do not have static fields - public static const GL_SRC1_RGB: int32_t = 34177;

    //Interfaces do not have static fields - public static const GL_SRC2_ALPHA: int32_t = 34186;

    //Interfaces do not have static fields - public static const GL_SRC2_RGB: int32_t = 34178;

    //Interfaces do not have static fields - public static const GL_STATIC_DRAW: int32_t = 35044;

    //Interfaces do not have static fields - public static const GL_STENCIL_CLEAR_VALUE: int32_t = 2961;

    //Interfaces do not have static fields - public static const GL_STENCIL_FAIL: int32_t = 2964;

    //Interfaces do not have static fields - public static const GL_STENCIL_FUNC: int32_t = 2962;

    //Interfaces do not have static fields - public static const GL_STENCIL_PASS_DEPTH_FAIL: int32_t = 2965;

    //Interfaces do not have static fields - public static const GL_STENCIL_PASS_DEPTH_PASS: int32_t = 2966;

    //Interfaces do not have static fields - public static const GL_STENCIL_REF: int32_t = 2967;

    //Interfaces do not have static fields - public static const GL_STENCIL_VALUE_MASK: int32_t = 2963;

    //Interfaces do not have static fields - public static const GL_STENCIL_WRITEMASK: int32_t = 2968;

    //Interfaces do not have static fields - public static const GL_SUBTRACT: int32_t = 34023;

    //Interfaces do not have static fields - public static const GL_TEXTURE_BINDING_2D: int32_t = 32873;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING: int32_t = 34970;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY_POINTER: int32_t = 32914;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY_SIZE: int32_t = 32904;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY_STRIDE: int32_t = 32906;

    //Interfaces do not have static fields - public static const GL_TEXTURE_COORD_ARRAY_TYPE: int32_t = 32905;

    //Interfaces do not have static fields - public static const GL_TEXTURE_MATRIX: int32_t = 2984;

    //Interfaces do not have static fields - public static const GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES: int32_t = 35215;

    //Interfaces do not have static fields - public static const GL_TEXTURE_STACK_DEPTH: int32_t = 2981;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY_BUFFER_BINDING: int32_t = 34966;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY_POINTER: int32_t = 32910;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY_SIZE: int32_t = 32890;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY_STRIDE: int32_t = 32892;

    //Interfaces do not have static fields - public static const GL_VERTEX_ARRAY_TYPE: int32_t = 32891;

    //Interfaces do not have static fields - public static const GL_VIEWPORT: int32_t = 2978;

    //Interfaces do not have static fields - public static const GL_WRITE_ONLY: int32_t = 35001;

    glBindBuffer(int32_t target, int32_t buffer);

    glBufferData(int32_t target, int32_t size, Buffer data, int32_t usage);

    glBufferSubData(int32_t target, int32_t offset, int32_t size, Buffer data);

    glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset);

    glClipPlanef(int32_t plane, FloatBuffer equation);

    glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha);

    glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    glDeleteBuffers(int32_t n, IntBuffer buffers);

    glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset);

    glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    glGenBuffers(int32_t n, IntBuffer buffers);

    glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    glGetBufferParameteriv(int32_t target, int32_t pname, IntBuffer params);

    glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset);

    glGetClipPlanef(int32_t pname, FloatBuffer eqn);

    glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset);

    glGetFloatv(int32_t pname, FloatBuffer params);

    glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    glGetLightfv(int32_t light, int32_t pname, FloatBuffer params);

    glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    glGetMaterialfv(int32_t face, int32_t pname, FloatBuffer params);

    glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset);

    glGetTexEnviv(int32_t env, int32_t pname, IntBuffer params);

    glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    glGetTexParameterfv(int32_t target, int32_t pname, FloatBuffer params);

    glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    glGetTexParameteriv(int32_t target, int32_t pname, IntBuffer params);

    bool glIsBuffer(int32_t buffer);

    bool glIsEnabled(int32_t cap);

    bool glIsTexture(int32_t texture);

    glNormalPointer(int32_t type, int32_t stride, int32_t offset);

    glPointParameterf(int32_t pname, float param);

    glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset);

    glPointParameterfv(int32_t pname, FloatBuffer params);

    glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    glTexEnvi(int32_t target, int32_t pname, int32_t param);

    glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    glTexEnviv(int32_t target, int32_t pname, IntBuffer params);

    glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    glTexParameterfv(int32_t target, int32_t pname, FloatBuffer params);

    glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    glTexParameteriv(int32_t target, int32_t pname, IntBuffer params);

    glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
