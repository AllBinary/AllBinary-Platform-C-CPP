
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/nio/Buffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/khronos/opengles/GL10.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL11I {
        
    public: static inline const int32_t GL_ACTIVE_TEXTURE = 34016;
    public: static inline const int32_t GL_ADD_SIGNED = 34164;
    public: static inline const int32_t GL_ALPHA_SCALE = 3356;
    public: static inline const int32_t GL_ALPHA_TEST_FUNC = 3009;
    public: static inline const int32_t GL_ALPHA_TEST_REF = 3010;
    public: static inline const int32_t GL_ARRAY_BUFFER = 34962;
    public: static inline const int32_t GL_ARRAY_BUFFER_BINDING = 34964;
    public: static inline const int32_t GL_BLEND_DST = 3040;
    public: static inline const int32_t GL_BLEND_SRC = 3041;
    public: static inline const int32_t GL_BUFFER_ACCESS = 35003;
    public: static inline const int32_t GL_BUFFER_SIZE = 34660;
    public: static inline const int32_t GL_BUFFER_USAGE = 34661;
    public: static inline const int32_t GL_CLIENT_ACTIVE_TEXTURE = 34017;
    public: static inline const int32_t GL_CLIP_PLANE0 = 12288;
    public: static inline const int32_t GL_CLIP_PLANE1 = 12289;
    public: static inline const int32_t GL_CLIP_PLANE2 = 12290;
    public: static inline const int32_t GL_CLIP_PLANE3 = 12291;
    public: static inline const int32_t GL_CLIP_PLANE4 = 12292;
    public: static inline const int32_t GL_CLIP_PLANE5 = 12293;
    public: static inline const int32_t GL_COLOR_ARRAY_BUFFER_BINDING = 34968;
    public: static inline const int32_t GL_COLOR_ARRAY_POINTER = 32912;
    public: static inline const int32_t GL_COLOR_ARRAY_SIZE = 32897;
    public: static inline const int32_t GL_COLOR_ARRAY_STRIDE = 32899;
    public: static inline const int32_t GL_COLOR_ARRAY_TYPE = 32898;
    public: static inline const int32_t GL_COLOR_CLEAR_VALUE = 3106;
    public: static inline const int32_t GL_COLOR_WRITEMASK = 3107;
    public: static inline const int32_t GL_COMBINE = 34160;
    public: static inline const int32_t GL_COMBINE_ALPHA = 34162;
    public: static inline const int32_t GL_COMBINE_RGB = 34161;
    public: static inline const int32_t GL_CONSTANT = 34166;
    public: static inline const int32_t GL_COORD_REPLACE_OES = 34914;
    public: static inline const int32_t GL_CULL_FACE_MODE = 2885;
    public: static inline const int32_t GL_CURRENT_COLOR = 2816;
    public: static inline const int32_t GL_CURRENT_NORMAL = 2818;
    public: static inline const int32_t GL_CURRENT_TEXTURE_COORDS = 2819;
    public: static inline const int32_t GL_DEPTH_CLEAR_VALUE = 2931;
    public: static inline const int32_t GL_DEPTH_FUNC = 2932;
    public: static inline const int32_t GL_DEPTH_RANGE = 2928;
    public: static inline const int32_t GL_DEPTH_WRITEMASK = 2930;
    public: static inline const int32_t GL_DOT3_RGB = 34478;
    public: static inline const int32_t GL_DOT3_RGBA = 34479;
    public: static inline const int32_t GL_DYNAMIC_DRAW = 35048;
    public: static inline const int32_t GL_ELEMENT_ARRAY_BUFFER = 34963;
    public: static inline const int32_t GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;
    public: static inline const int32_t GL_FRONT_FACE = 2886;
    public: static inline const int32_t GL_GENERATE_MIPMAP = 33169;
    public: static inline const int32_t GL_GENERATE_MIPMAP_HINT = 33170;
    public: static inline const int32_t GL_INTERPOLATE = 34165;
    public: static inline const int32_t GL_LINE_WIDTH = 2849;
    public: static inline const int32_t GL_LOGIC_OP_MODE = 3056;
    public: static inline const int32_t GL_MATRIX_MODE = 2976;
    public: static inline const int32_t GL_MAX_CLIP_PLANES = 3378;
    public: static inline const int32_t GL_MODELVIEW_MATRIX = 2982;
    public: static inline const int32_t GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;
    public: static inline const int32_t GL_MODELVIEW_STACK_DEPTH = 2979;
    public: static inline const int32_t GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;
    public: static inline const int32_t GL_NORMAL_ARRAY_POINTER = 32911;
    public: static inline const int32_t GL_NORMAL_ARRAY_STRIDE = 32895;
    public: static inline const int32_t GL_NORMAL_ARRAY_TYPE = 32894;
    public: static inline const int32_t GL_OPERAND0_ALPHA = 34200;
    public: static inline const int32_t GL_OPERAND0_RGB = 34192;
    public: static inline const int32_t GL_OPERAND1_ALPHA = 34201;
    public: static inline const int32_t GL_OPERAND1_RGB = 34193;
    public: static inline const int32_t GL_OPERAND2_ALPHA = 34202;
    public: static inline const int32_t GL_OPERAND2_RGB = 34194;
    public: static inline const int32_t GL_POINT_DISTANCE_ATTENUATION = 33065;
    public: static inline const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;
    public: static inline const int32_t GL_POINT_SIZE = 2833;
    public: static inline const int32_t GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;
    public: static inline const int32_t GL_POINT_SIZE_ARRAY_OES = 35740;
    public: static inline const int32_t GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;
    public: static inline const int32_t GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;
    public: static inline const int32_t GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;
    public: static inline const int32_t GL_POINT_SIZE_MAX = 33063;
    public: static inline const int32_t GL_POINT_SIZE_MIN = 33062;
    public: static inline const int32_t GL_POINT_SPRITE_OES = 34913;
    public: static inline const int32_t GL_POLYGON_OFFSET_FACTOR = 32824;
    public: static inline const int32_t GL_POLYGON_OFFSET_UNITS = 10752;
    public: static inline const int32_t GL_PREVIOUS = 34168;
    public: static inline const int32_t GL_PRIMARY_COLOR = 34167;
    public: static inline const int32_t GL_PROJECTION_MATRIX = 2983;
    public: static inline const int32_t GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;
    public: static inline const int32_t GL_PROJECTION_STACK_DEPTH = 2980;
    public: static inline const int32_t GL_RGB_SCALE = 34163;
    public: static inline const int32_t GL_SAMPLE_BUFFERS = 32936;
    public: static inline const int32_t GL_SAMPLE_COVERAGE_INVERT = 32939;
    public: static inline const int32_t GL_SAMPLE_COVERAGE_VALUE = 32938;
    public: static inline const int32_t GL_SAMPLES = 32937;
    public: static inline const int32_t GL_SCISSOR_BOX = 3088;
    public: static inline const int32_t GL_SHADE_MODEL = 2900;
    public: static inline const int32_t GL_SRC0_ALPHA = 34184;
    public: static inline const int32_t GL_SRC0_RGB = 34176;
    public: static inline const int32_t GL_SRC1_ALPHA = 34185;
    public: static inline const int32_t GL_SRC1_RGB = 34177;
    public: static inline const int32_t GL_SRC2_ALPHA = 34186;
    public: static inline const int32_t GL_SRC2_RGB = 34178;
    public: static inline const int32_t GL_STATIC_DRAW = 35044;
    public: static inline const int32_t GL_STENCIL_CLEAR_VALUE = 2961;
    public: static inline const int32_t GL_STENCIL_FAIL = 2964;
    public: static inline const int32_t GL_STENCIL_FUNC = 2962;
    public: static inline const int32_t GL_STENCIL_PASS_DEPTH_FAIL = 2965;
    public: static inline const int32_t GL_STENCIL_PASS_DEPTH_PASS = 2966;
    public: static inline const int32_t GL_STENCIL_REF = 2967;
    public: static inline const int32_t GL_STENCIL_VALUE_MASK = 2963;
    public: static inline const int32_t GL_STENCIL_WRITEMASK = 2968;
    public: static inline const int32_t GL_SUBTRACT = 34023;
    public: static inline const int32_t GL_TEXTURE_BINDING_2D = 32873;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_POINTER = 32914;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_SIZE = 32904;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;
    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_TYPE = 32905;
    public: static inline const int32_t GL_TEXTURE_MATRIX = 2984;
    public: static inline const int32_t GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;
    public: static inline const int32_t GL_TEXTURE_STACK_DEPTH = 2981;
    public: static inline const int32_t GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;
    public: static inline const int32_t GL_VERTEX_ARRAY_POINTER = 32910;
    public: static inline const int32_t GL_VERTEX_ARRAY_SIZE = 32890;
    public: static inline const int32_t GL_VERTEX_ARRAY_STRIDE = 32892;
    public: static inline const int32_t GL_VERTEX_ARRAY_TYPE = 32891;
    public: static inline const int32_t GL_VIEWPORT = 2978;
    public: static inline const int32_t GL_WRITE_ONLY = 35001;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            };
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GL11: public GL10 {

    public: static inline const int32_t GL_ACTIVE_TEXTURE = 34016;

    public: static inline const int32_t GL_ADD_SIGNED = 34164;

    public: static inline const int32_t GL_ALPHA_SCALE = 3356;

    public: static inline const int32_t GL_ALPHA_TEST_FUNC = 3009;

    public: static inline const int32_t GL_ALPHA_TEST_REF = 3010;

    public: static inline const int32_t GL_ARRAY_BUFFER = 34962;

    public: static inline const int32_t GL_ARRAY_BUFFER_BINDING = 34964;

    public: static inline const int32_t GL_BLEND_DST = 3040;

    public: static inline const int32_t GL_BLEND_SRC = 3041;

    public: static inline const int32_t GL_BUFFER_ACCESS = 35003;

    public: static inline const int32_t GL_BUFFER_SIZE = 34660;

    public: static inline const int32_t GL_BUFFER_USAGE = 34661;

    public: static inline const int32_t GL_CLIENT_ACTIVE_TEXTURE = 34017;

    public: static inline const int32_t GL_CLIP_PLANE0 = 12288;

    public: static inline const int32_t GL_CLIP_PLANE1 = 12289;

    public: static inline const int32_t GL_CLIP_PLANE2 = 12290;

    public: static inline const int32_t GL_CLIP_PLANE3 = 12291;

    public: static inline const int32_t GL_CLIP_PLANE4 = 12292;

    public: static inline const int32_t GL_CLIP_PLANE5 = 12293;

    public: static inline const int32_t GL_COLOR_ARRAY_BUFFER_BINDING = 34968;

    public: static inline const int32_t GL_COLOR_ARRAY_POINTER = 32912;

    public: static inline const int32_t GL_COLOR_ARRAY_SIZE = 32897;

    public: static inline const int32_t GL_COLOR_ARRAY_STRIDE = 32899;

    public: static inline const int32_t GL_COLOR_ARRAY_TYPE = 32898;

    public: static inline const int32_t GL_COLOR_CLEAR_VALUE = 3106;

    public: static inline const int32_t GL_COLOR_WRITEMASK = 3107;

    public: static inline const int32_t GL_COMBINE = 34160;

    public: static inline const int32_t GL_COMBINE_ALPHA = 34162;

    public: static inline const int32_t GL_COMBINE_RGB = 34161;

    public: static inline const int32_t GL_CONSTANT = 34166;

    public: static inline const int32_t GL_COORD_REPLACE_OES = 34914;

    public: static inline const int32_t GL_CULL_FACE_MODE = 2885;

    public: static inline const int32_t GL_CURRENT_COLOR = 2816;

    public: static inline const int32_t GL_CURRENT_NORMAL = 2818;

    public: static inline const int32_t GL_CURRENT_TEXTURE_COORDS = 2819;

    public: static inline const int32_t GL_DEPTH_CLEAR_VALUE = 2931;

    public: static inline const int32_t GL_DEPTH_FUNC = 2932;

    public: static inline const int32_t GL_DEPTH_RANGE = 2928;

    public: static inline const int32_t GL_DEPTH_WRITEMASK = 2930;

    public: static inline const int32_t GL_DOT3_RGB = 34478;

    public: static inline const int32_t GL_DOT3_RGBA = 34479;

    public: static inline const int32_t GL_DYNAMIC_DRAW = 35048;

    public: static inline const int32_t GL_ELEMENT_ARRAY_BUFFER = 34963;

    public: static inline const int32_t GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;

    public: static inline const int32_t GL_FRONT_FACE = 2886;

    public: static inline const int32_t GL_GENERATE_MIPMAP = 33169;

    public: static inline const int32_t GL_GENERATE_MIPMAP_HINT = 33170;

    public: static inline const int32_t GL_INTERPOLATE = 34165;

    public: static inline const int32_t GL_LINE_WIDTH = 2849;

    public: static inline const int32_t GL_LOGIC_OP_MODE = 3056;

    public: static inline const int32_t GL_MATRIX_MODE = 2976;

    public: static inline const int32_t GL_MAX_CLIP_PLANES = 3378;

    public: static inline const int32_t GL_MODELVIEW_MATRIX = 2982;

    public: static inline const int32_t GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;

    public: static inline const int32_t GL_MODELVIEW_STACK_DEPTH = 2979;

    public: static inline const int32_t GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;

    public: static inline const int32_t GL_NORMAL_ARRAY_POINTER = 32911;

    public: static inline const int32_t GL_NORMAL_ARRAY_STRIDE = 32895;

    public: static inline const int32_t GL_NORMAL_ARRAY_TYPE = 32894;

    public: static inline const int32_t GL_OPERAND0_ALPHA = 34200;

    public: static inline const int32_t GL_OPERAND0_RGB = 34192;

    public: static inline const int32_t GL_OPERAND1_ALPHA = 34201;

    public: static inline const int32_t GL_OPERAND1_RGB = 34193;

    public: static inline const int32_t GL_OPERAND2_ALPHA = 34202;

    public: static inline const int32_t GL_OPERAND2_RGB = 34194;

    public: static inline const int32_t GL_POINT_DISTANCE_ATTENUATION = 33065;

    public: static inline const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;

    public: static inline const int32_t GL_POINT_SIZE = 2833;

    public: static inline const int32_t GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;

    public: static inline const int32_t GL_POINT_SIZE_ARRAY_OES = 35740;

    public: static inline const int32_t GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;

    public: static inline const int32_t GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;

    public: static inline const int32_t GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;

    public: static inline const int32_t GL_POINT_SIZE_MAX = 33063;

    public: static inline const int32_t GL_POINT_SIZE_MIN = 33062;

    public: static inline const int32_t GL_POINT_SPRITE_OES = 34913;

    public: static inline const int32_t GL_POLYGON_OFFSET_FACTOR = 32824;

    public: static inline const int32_t GL_POLYGON_OFFSET_UNITS = 10752;

    public: static inline const int32_t GL_PREVIOUS = 34168;

    public: static inline const int32_t GL_PRIMARY_COLOR = 34167;

    public: static inline const int32_t GL_PROJECTION_MATRIX = 2983;

    public: static inline const int32_t GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;

    public: static inline const int32_t GL_PROJECTION_STACK_DEPTH = 2980;

    public: static inline const int32_t GL_RGB_SCALE = 34163;

    public: static inline const int32_t GL_SAMPLE_BUFFERS = 32936;

    public: static inline const int32_t GL_SAMPLE_COVERAGE_INVERT = 32939;

    public: static inline const int32_t GL_SAMPLE_COVERAGE_VALUE = 32938;

    public: static inline const int32_t GL_SAMPLES = 32937;

    public: static inline const int32_t GL_SCISSOR_BOX = 3088;

    public: static inline const int32_t GL_SHADE_MODEL = 2900;

    public: static inline const int32_t GL_SRC0_ALPHA = 34184;

    public: static inline const int32_t GL_SRC0_RGB = 34176;

    public: static inline const int32_t GL_SRC1_ALPHA = 34185;

    public: static inline const int32_t GL_SRC1_RGB = 34177;

    public: static inline const int32_t GL_SRC2_ALPHA = 34186;

    public: static inline const int32_t GL_SRC2_RGB = 34178;

    public: static inline const int32_t GL_STATIC_DRAW = 35044;

    public: static inline const int32_t GL_STENCIL_CLEAR_VALUE = 2961;

    public: static inline const int32_t GL_STENCIL_FAIL = 2964;

    public: static inline const int32_t GL_STENCIL_FUNC = 2962;

    public: static inline const int32_t GL_STENCIL_PASS_DEPTH_FAIL = 2965;

    public: static inline const int32_t GL_STENCIL_PASS_DEPTH_PASS = 2966;

    public: static inline const int32_t GL_STENCIL_REF = 2967;

    public: static inline const int32_t GL_STENCIL_VALUE_MASK = 2963;

    public: static inline const int32_t GL_STENCIL_WRITEMASK = 2968;

    public: static inline const int32_t GL_SUBTRACT = 34023;

    public: static inline const int32_t GL_TEXTURE_BINDING_2D = 32873;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_POINTER = 32914;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_SIZE = 32904;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;

    public: static inline const int32_t GL_TEXTURE_COORD_ARRAY_TYPE = 32905;

    public: static inline const int32_t GL_TEXTURE_MATRIX = 2984;

    public: static inline const int32_t GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;

    public: static inline const int32_t GL_TEXTURE_STACK_DEPTH = 2981;

    public: static inline const int32_t GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;

    public: static inline const int32_t GL_VERTEX_ARRAY_POINTER = 32910;

    public: static inline const int32_t GL_VERTEX_ARRAY_SIZE = 32890;

    public: static inline const int32_t GL_VERTEX_ARRAY_STRIDE = 32892;

    public: static inline const int32_t GL_VERTEX_ARRAY_TYPE = 32891;

    public: static inline const int32_t GL_VIEWPORT = 2978;

    public: static inline const int32_t GL_WRITE_ONLY = 35001;

    public: virtual void glBindBuffer(int32_t target, int32_t buffer) = 0;

    public: virtual void glBufferData(int32_t target, int32_t size, Buffer* data, int32_t usage) = 0;

    public: virtual void glBufferSubData(int32_t target, int32_t offset, int32_t size, Buffer* data) = 0;

    public: virtual void glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset) = 0;

    public: virtual void glClipPlanef(int32_t plane, FloatBuffer* equation) = 0;

    public: virtual void glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha) = 0;

    public: virtual void glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) = 0;

    public: virtual void glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset) = 0;

    public: virtual void glDeleteBuffers(int32_t n, IntBuffer* buffers) = 0;

    public: virtual void glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset) = 0;

    public: virtual void glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset) = 0;

    public: virtual void glGenBuffers(int32_t n, IntBuffer* buffers) = 0;

    public: virtual void glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glGetBufferParameteriv(int32_t target, int32_t pname, IntBuffer* params) = 0;

    public: virtual void glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset) = 0;

    public: virtual void glGetClipPlanef(int32_t pname, FloatBuffer* eqn) = 0;

    public: virtual void glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glGetFloatv(int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glGetLightfv(int32_t light, int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glGetMaterialfv(int32_t face, int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glGetTexEnviv(int32_t env, int32_t pname, IntBuffer* params) = 0;

    public: virtual void glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glGetTexParameterfv(int32_t target, int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glGetTexParameteriv(int32_t target, int32_t pname, IntBuffer* params) = 0;

    public: virtual bool glIsBuffer(int32_t buffer) = 0;

    public: virtual bool glIsEnabled(int32_t cap) = 0;

    public: virtual bool glIsTexture(int32_t texture) = 0;

    public: virtual void glNormalPointer(int32_t type, int32_t stride, int32_t offset) = 0;

    public: virtual void glPointParameterf(int32_t pname, float param) = 0;

    public: virtual void glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glPointParameterfv(int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) = 0;

    public: virtual void glTexEnvi(int32_t target, int32_t pname, int32_t param) = 0;

    public: virtual void glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glTexEnviv(int32_t target, int32_t pname, IntBuffer* params) = 0;

    public: virtual void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) = 0;

    public: virtual void glTexParameterfv(int32_t target, int32_t pname, FloatBuffer* params) = 0;

    public: virtual void glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) = 0;

    public: virtual void glTexParameteriv(int32_t target, int32_t pname, IntBuffer* params) = 0;

    public: virtual void glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) = 0;

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H_COMPLETE)
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H_COMPLETE
        #if __has_include(<java/nio/Buffer.h>)
#include <java/nio/Buffer.h>
#endif
#if __has_include(<java/nio/FloatBuffer.h>)
#include <java/nio/FloatBuffer.h>
#endif
#if __has_include(<java/nio/IntBuffer.h>)
#include <java/nio/IntBuffer.h>
#endif
#if __has_include("javax/microedition/khronos/opengles/GL10.h")
#include "javax/microedition/khronos/opengles/GL10.h"
#endif

        #endif
    
