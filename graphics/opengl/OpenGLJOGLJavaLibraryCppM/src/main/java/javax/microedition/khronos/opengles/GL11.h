
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H

            #include <vector>
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL10.h"
#include "Buffer.h"
#include "FloatBuffer.h"
#include "IntBuffer.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL11I {
        
    public: static const int32_t GL_ACTIVE_TEXTURE = 34016;
    public: static const int32_t GL_ADD_SIGNED = 34164;
    public: static const int32_t GL_ALPHA_SCALE = 3356;
    public: static const int32_t GL_ALPHA_TEST_FUNC = 3009;
    public: static const int32_t GL_ALPHA_TEST_REF = 3010;
    public: static const int32_t GL_ARRAY_BUFFER = 34962;
    public: static const int32_t GL_ARRAY_BUFFER_BINDING = 34964;
    public: static const int32_t GL_BLEND_DST = 3040;
    public: static const int32_t GL_BLEND_SRC = 3041;
    public: static const int32_t GL_BUFFER_ACCESS = 35003;
    public: static const int32_t GL_BUFFER_SIZE = 34660;
    public: static const int32_t GL_BUFFER_USAGE = 34661;
    public: static const int32_t GL_CLIENT_ACTIVE_TEXTURE = 34017;
    public: static const int32_t GL_CLIP_PLANE0 = 12288;
    public: static const int32_t GL_CLIP_PLANE1 = 12289;
    public: static const int32_t GL_CLIP_PLANE2 = 12290;
    public: static const int32_t GL_CLIP_PLANE3 = 12291;
    public: static const int32_t GL_CLIP_PLANE4 = 12292;
    public: static const int32_t GL_CLIP_PLANE5 = 12293;
    public: static const int32_t GL_COLOR_ARRAY_BUFFER_BINDING = 34968;
    public: static const int32_t GL_COLOR_ARRAY_POINTER = 32912;
    public: static const int32_t GL_COLOR_ARRAY_SIZE = 32897;
    public: static const int32_t GL_COLOR_ARRAY_STRIDE = 32899;
    public: static const int32_t GL_COLOR_ARRAY_TYPE = 32898;
    public: static const int32_t GL_COLOR_CLEAR_VALUE = 3106;
    public: static const int32_t GL_COLOR_WRITEMASK = 3107;
    public: static const int32_t GL_COMBINE = 34160;
    public: static const int32_t GL_COMBINE_ALPHA = 34162;
    public: static const int32_t GL_COMBINE_RGB = 34161;
    public: static const int32_t GL_CONSTANT = 34166;
    public: static const int32_t GL_COORD_REPLACE_OES = 34914;
    public: static const int32_t GL_CULL_FACE_MODE = 2885;
    public: static const int32_t GL_CURRENT_COLOR = 2816;
    public: static const int32_t GL_CURRENT_NORMAL = 2818;
    public: static const int32_t GL_CURRENT_TEXTURE_COORDS = 2819;
    public: static const int32_t GL_DEPTH_CLEAR_VALUE = 2931;
    public: static const int32_t GL_DEPTH_FUNC = 2932;
    public: static const int32_t GL_DEPTH_RANGE = 2928;
    public: static const int32_t GL_DEPTH_WRITEMASK = 2930;
    public: static const int32_t GL_DOT3_RGB = 34478;
    public: static const int32_t GL_DOT3_RGBA = 34479;
    public: static const int32_t GL_DYNAMIC_DRAW = 35048;
    public: static const int32_t GL_ELEMENT_ARRAY_BUFFER = 34963;
    public: static const int32_t GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;
    public: static const int32_t GL_FRONT_FACE = 2886;
    public: static const int32_t GL_GENERATE_MIPMAP = 33169;
    public: static const int32_t GL_GENERATE_MIPMAP_HINT = 33170;
    public: static const int32_t GL_INTERPOLATE = 34165;
    public: static const int32_t GL_LINE_WIDTH = 2849;
    public: static const int32_t GL_LOGIC_OP_MODE = 3056;
    public: static const int32_t GL_MATRIX_MODE = 2976;
    public: static const int32_t GL_MAX_CLIP_PLANES = 3378;
    public: static const int32_t GL_MODELVIEW_MATRIX = 2982;
    public: static const int32_t GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;
    public: static const int32_t GL_MODELVIEW_STACK_DEPTH = 2979;
    public: static const int32_t GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;
    public: static const int32_t GL_NORMAL_ARRAY_POINTER = 32911;
    public: static const int32_t GL_NORMAL_ARRAY_STRIDE = 32895;
    public: static const int32_t GL_NORMAL_ARRAY_TYPE = 32894;
    public: static const int32_t GL_OPERAND0_ALPHA = 34200;
    public: static const int32_t GL_OPERAND0_RGB = 34192;
    public: static const int32_t GL_OPERAND1_ALPHA = 34201;
    public: static const int32_t GL_OPERAND1_RGB = 34193;
    public: static const int32_t GL_OPERAND2_ALPHA = 34202;
    public: static const int32_t GL_OPERAND2_RGB = 34194;
    public: static const int32_t GL_POINT_DISTANCE_ATTENUATION = 33065;
    public: static const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;
    public: static const int32_t GL_POINT_SIZE = 2833;
    public: static const int32_t GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;
    public: static const int32_t GL_POINT_SIZE_ARRAY_OES = 35740;
    public: static const int32_t GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;
    public: static const int32_t GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;
    public: static const int32_t GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;
    public: static const int32_t GL_POINT_SIZE_MAX = 33063;
    public: static const int32_t GL_POINT_SIZE_MIN = 33062;
    public: static const int32_t GL_POINT_SPRITE_OES = 34913;
    public: static const int32_t GL_POLYGON_OFFSET_FACTOR = 32824;
    public: static const int32_t GL_POLYGON_OFFSET_UNITS = 10752;
    public: static const int32_t GL_PREVIOUS = 34168;
    public: static const int32_t GL_PRIMARY_COLOR = 34167;
    public: static const int32_t GL_PROJECTION_MATRIX = 2983;
    public: static const int32_t GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;
    public: static const int32_t GL_PROJECTION_STACK_DEPTH = 2980;
    public: static const int32_t GL_RGB_SCALE = 34163;
    public: static const int32_t GL_SAMPLE_BUFFERS = 32936;
    public: static const int32_t GL_SAMPLE_COVERAGE_INVERT = 32939;
    public: static const int32_t GL_SAMPLE_COVERAGE_VALUE = 32938;
    public: static const int32_t GL_SAMPLES = 32937;
    public: static const int32_t GL_SCISSOR_BOX = 3088;
    public: static const int32_t GL_SHADE_MODEL = 2900;
    public: static const int32_t GL_SRC0_ALPHA = 34184;
    public: static const int32_t GL_SRC0_RGB = 34176;
    public: static const int32_t GL_SRC1_ALPHA = 34185;
    public: static const int32_t GL_SRC1_RGB = 34177;
    public: static const int32_t GL_SRC2_ALPHA = 34186;
    public: static const int32_t GL_SRC2_RGB = 34178;
    public: static const int32_t GL_STATIC_DRAW = 35044;
    public: static const int32_t GL_STENCIL_CLEAR_VALUE = 2961;
    public: static const int32_t GL_STENCIL_FAIL = 2964;
    public: static const int32_t GL_STENCIL_FUNC = 2962;
    public: static const int32_t GL_STENCIL_PASS_DEPTH_FAIL = 2965;
    public: static const int32_t GL_STENCIL_PASS_DEPTH_PASS = 2966;
    public: static const int32_t GL_STENCIL_REF = 2967;
    public: static const int32_t GL_STENCIL_VALUE_MASK = 2963;
    public: static const int32_t GL_STENCIL_WRITEMASK = 2968;
    public: static const int32_t GL_SUBTRACT = 34023;
    public: static const int32_t GL_TEXTURE_BINDING_2D = 32873;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY_POINTER = 32914;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY_SIZE = 32904;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;
    public: static const int32_t GL_TEXTURE_COORD_ARRAY_TYPE = 32905;
    public: static const int32_t GL_TEXTURE_MATRIX = 2984;
    public: static const int32_t GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;
    public: static const int32_t GL_TEXTURE_STACK_DEPTH = 2981;
    public: static const int32_t GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;
    public: static const int32_t GL_VERTEX_ARRAY_POINTER = 32910;
    public: static const int32_t GL_VERTEX_ARRAY_SIZE = 32890;
    public: static const int32_t GL_VERTEX_ARRAY_STRIDE = 32892;
    public: static const int32_t GL_VERTEX_ARRAY_TYPE = 32891;
    public: static const int32_t GL_VIEWPORT = 2978;
    public: static const int32_t GL_WRITE_ONLY = 35001;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            }
        
class GL11: public javax::microedition::khronos::opengles::GL10 {

    //Interfaces do not have static fields - public: static const int32_t GL_ACTIVE_TEXTURE = 34016;

    //Interfaces do not have static fields - public: static const int32_t GL_ADD_SIGNED = 34164;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA_SCALE = 3356;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA_TEST_FUNC = 3009;

    //Interfaces do not have static fields - public: static const int32_t GL_ALPHA_TEST_REF = 3010;

    //Interfaces do not have static fields - public: static const int32_t GL_ARRAY_BUFFER = 34962;

    //Interfaces do not have static fields - public: static const int32_t GL_ARRAY_BUFFER_BINDING = 34964;

    //Interfaces do not have static fields - public: static const int32_t GL_BLEND_DST = 3040;

    //Interfaces do not have static fields - public: static const int32_t GL_BLEND_SRC = 3041;

    //Interfaces do not have static fields - public: static const int32_t GL_BUFFER_ACCESS = 35003;

    //Interfaces do not have static fields - public: static const int32_t GL_BUFFER_SIZE = 34660;

    //Interfaces do not have static fields - public: static const int32_t GL_BUFFER_USAGE = 34661;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIENT_ACTIVE_TEXTURE = 34017;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE0 = 12288;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE1 = 12289;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE2 = 12290;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE3 = 12291;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE4 = 12292;

    //Interfaces do not have static fields - public: static const int32_t GL_CLIP_PLANE5 = 12293;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY_BUFFER_BINDING = 34968;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY_POINTER = 32912;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY_SIZE = 32897;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY_STRIDE = 32899;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_ARRAY_TYPE = 32898;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_CLEAR_VALUE = 3106;

    //Interfaces do not have static fields - public: static const int32_t GL_COLOR_WRITEMASK = 3107;

    //Interfaces do not have static fields - public: static const int32_t GL_COMBINE = 34160;

    //Interfaces do not have static fields - public: static const int32_t GL_COMBINE_ALPHA = 34162;

    //Interfaces do not have static fields - public: static const int32_t GL_COMBINE_RGB = 34161;

    //Interfaces do not have static fields - public: static const int32_t GL_CONSTANT = 34166;

    //Interfaces do not have static fields - public: static const int32_t GL_COORD_REPLACE_OES = 34914;

    //Interfaces do not have static fields - public: static const int32_t GL_CULL_FACE_MODE = 2885;

    //Interfaces do not have static fields - public: static const int32_t GL_CURRENT_COLOR = 2816;

    //Interfaces do not have static fields - public: static const int32_t GL_CURRENT_NORMAL = 2818;

    //Interfaces do not have static fields - public: static const int32_t GL_CURRENT_TEXTURE_COORDS = 2819;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_CLEAR_VALUE = 2931;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_FUNC = 2932;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_RANGE = 2928;

    //Interfaces do not have static fields - public: static const int32_t GL_DEPTH_WRITEMASK = 2930;

    //Interfaces do not have static fields - public: static const int32_t GL_DOT3_RGB = 34478;

    //Interfaces do not have static fields - public: static const int32_t GL_DOT3_RGBA = 34479;

    //Interfaces do not have static fields - public: static const int32_t GL_DYNAMIC_DRAW = 35048;

    //Interfaces do not have static fields - public: static const int32_t GL_ELEMENT_ARRAY_BUFFER = 34963;

    //Interfaces do not have static fields - public: static const int32_t GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;

    //Interfaces do not have static fields - public: static const int32_t GL_FRONT_FACE = 2886;

    //Interfaces do not have static fields - public: static const int32_t GL_GENERATE_MIPMAP = 33169;

    //Interfaces do not have static fields - public: static const int32_t GL_GENERATE_MIPMAP_HINT = 33170;

    //Interfaces do not have static fields - public: static const int32_t GL_INTERPOLATE = 34165;

    //Interfaces do not have static fields - public: static const int32_t GL_LINE_WIDTH = 2849;

    //Interfaces do not have static fields - public: static const int32_t GL_LOGIC_OP_MODE = 3056;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_MODE = 2976;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_CLIP_PLANES = 3378;

    //Interfaces do not have static fields - public: static const int32_t GL_MODELVIEW_MATRIX = 2982;

    //Interfaces do not have static fields - public: static const int32_t GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;

    //Interfaces do not have static fields - public: static const int32_t GL_MODELVIEW_STACK_DEPTH = 2979;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMAL_ARRAY_POINTER = 32911;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMAL_ARRAY_STRIDE = 32895;

    //Interfaces do not have static fields - public: static const int32_t GL_NORMAL_ARRAY_TYPE = 32894;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND0_ALPHA = 34200;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND0_RGB = 34192;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND1_ALPHA = 34201;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND1_RGB = 34193;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND2_ALPHA = 34202;

    //Interfaces do not have static fields - public: static const int32_t GL_OPERAND2_RGB = 34194;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_DISTANCE_ATTENUATION = 33065;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_FADE_THRESHOLD_SIZE = 33064;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE = 2833;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_ARRAY_OES = 35740;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_MAX = 33063;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SIZE_MIN = 33062;

    //Interfaces do not have static fields - public: static const int32_t GL_POINT_SPRITE_OES = 34913;

    //Interfaces do not have static fields - public: static const int32_t GL_POLYGON_OFFSET_FACTOR = 32824;

    //Interfaces do not have static fields - public: static const int32_t GL_POLYGON_OFFSET_UNITS = 10752;

    //Interfaces do not have static fields - public: static const int32_t GL_PREVIOUS = 34168;

    //Interfaces do not have static fields - public: static const int32_t GL_PRIMARY_COLOR = 34167;

    //Interfaces do not have static fields - public: static const int32_t GL_PROJECTION_MATRIX = 2983;

    //Interfaces do not have static fields - public: static const int32_t GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;

    //Interfaces do not have static fields - public: static const int32_t GL_PROJECTION_STACK_DEPTH = 2980;

    //Interfaces do not have static fields - public: static const int32_t GL_RGB_SCALE = 34163;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_BUFFERS = 32936;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_COVERAGE_INVERT = 32939;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLE_COVERAGE_VALUE = 32938;

    //Interfaces do not have static fields - public: static const int32_t GL_SAMPLES = 32937;

    //Interfaces do not have static fields - public: static const int32_t GL_SCISSOR_BOX = 3088;

    //Interfaces do not have static fields - public: static const int32_t GL_SHADE_MODEL = 2900;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC0_ALPHA = 34184;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC0_RGB = 34176;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC1_ALPHA = 34185;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC1_RGB = 34177;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC2_ALPHA = 34186;

    //Interfaces do not have static fields - public: static const int32_t GL_SRC2_RGB = 34178;

    //Interfaces do not have static fields - public: static const int32_t GL_STATIC_DRAW = 35044;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_CLEAR_VALUE = 2961;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_FAIL = 2964;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_FUNC = 2962;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_PASS_DEPTH_FAIL = 2965;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_PASS_DEPTH_PASS = 2966;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_REF = 2967;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_VALUE_MASK = 2963;

    //Interfaces do not have static fields - public: static const int32_t GL_STENCIL_WRITEMASK = 2968;

    //Interfaces do not have static fields - public: static const int32_t GL_SUBTRACT = 34023;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_BINDING_2D = 32873;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY_POINTER = 32914;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY_SIZE = 32904;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_COORD_ARRAY_TYPE = 32905;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_MATRIX = 2984;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_STACK_DEPTH = 2981;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY_POINTER = 32910;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY_SIZE = 32890;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY_STRIDE = 32892;

    //Interfaces do not have static fields - public: static const int32_t GL_VERTEX_ARRAY_TYPE = 32891;

    //Interfaces do not have static fields - public: static const int32_t GL_VIEWPORT = 2978;

    //Interfaces do not have static fields - public: static const int32_t GL_WRITE_ONLY = 35001;

    void glBindBuffer(int32_t target, int32_t buffer);

    void glBufferData(int32_t target, int32_t size, java::nio::Buffer data, int32_t usage);

    void glBufferSubData(int32_t target, int32_t offset, int32_t size, java::nio::Buffer data);

    void glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset);

    void glClipPlanef(int32_t plane, java::nio::FloatBuffer equation);

    void glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha);

    void glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    void glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    void glDeleteBuffers(int32_t n, java::nio::IntBuffer buffers);

    void glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset);

    void glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    void glGenBuffers(int32_t n, java::nio::IntBuffer buffers);

    void glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    void glGetBufferParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params);

    void glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset);

    void glGetClipPlanef(int32_t pname, java::nio::FloatBuffer eqn);

    void glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset);

    void glGetFloatv(int32_t pname, java::nio::FloatBuffer params);

    void glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    void glGetLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer params);

    void glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    void glGetMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer params);

    void glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset);

    void glGetTexEnviv(int32_t env, int32_t pname, java::nio::IntBuffer params);

    void glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    void glGetTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer params);

    void glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    void glGetTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params);

    bool glIsBuffer(int32_t buffer);

    bool glIsEnabled(int32_t cap);

    bool glIsTexture(int32_t texture);

    void glNormalPointer(int32_t type, int32_t stride, int32_t offset);

    void glPointParameterf(int32_t pname, float param);

    void glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset);

    void glPointParameterfv(int32_t pname, java::nio::FloatBuffer params);

    void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    void glTexEnvi(int32_t target, int32_t pname, int32_t param);

    void glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    void glTexEnviv(int32_t target, int32_t pname, java::nio::IntBuffer params);

    void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    void glTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer params);

    void glTexParameteri(int32_t target, int32_t pname, int32_t param);

    void glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    void glTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params);

    void glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
