
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H

            #include <vector>
        
#include <java/nio/Buffer.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <java/nio/IntBuffer.h>

      
#include <java/nio/ShortBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL11ExtI {
        
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_OES = 34884;
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;
    public: static const int32_t GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;
    public: static const int32_t GL_MATRIX_PALETTE_OES = 34880;
    public: static const int32_t GL_MAX_PALETTE_MATRICES_OES = 34882;
    public: static const int32_t GL_MAX_VERTEX_UNITS_OES = 34468;
    public: static const int32_t GL_TEXTURE_CROP_RECT_OES = 35741;
    public: static const int32_t GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;
    public: static const int32_t GL_WEIGHT_ARRAY_OES = 34477;
    public: static const int32_t GL_WEIGHT_ARRAY_POINTER_OES = 34476;
    public: static const int32_t GL_WEIGHT_ARRAY_SIZE_OES = 34475;
    public: static const int32_t GL_WEIGHT_ARRAY_STRIDE_OES = 34474;
    public: static const int32_t GL_WEIGHT_ARRAY_TYPE_OES = 34473;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            }
        
class GL11Ext: public GL {

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_OES = 34884;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;

    //Interfaces do not have static fields - public: static const int32_t GL_MATRIX_PALETTE_OES = 34880;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_PALETTE_MATRICES_OES = 34882;

    //Interfaces do not have static fields - public: static const int32_t GL_MAX_VERTEX_UNITS_OES = 34468;

    //Interfaces do not have static fields - public: static const int32_t GL_TEXTURE_CROP_RECT_OES = 35741;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_OES = 34477;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_POINTER_OES = 34476;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_SIZE_OES = 34475;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_STRIDE_OES = 34474;

    //Interfaces do not have static fields - public: static const int32_t GL_WEIGHT_ARRAY_TYPE_OES = 34473;

    void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> param, int32_t offset);

    void glCurrentPaletteMatrixOES(int32_t matrixpaletteindex);

    void glDrawTexfOES(float x, float y, float z, float width, float height);

    void glDrawTexfvOES(std::vector<float> coords, int32_t offset);

    void glDrawTexfvOES(FloatBuffer coords);

    void glDrawTexiOES(int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);

    void glDrawTexivOES(std::vector<int32_t> coords, int32_t offset);

    void glDrawTexivOES(IntBuffer coords);

    void glDrawTexsOES(int16_t x, int16_t y, int16_t z, int16_t width, int16_t height);

    void glDrawTexsvOES(std::vector<int16_t> coords, int32_t offset);

    void glDrawTexsvOES(ShortBuffer coords);

    void glDrawTexxOES(int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);

    void glDrawTexxvOES(std::vector<int32_t> coords, int32_t offset);

    void glDrawTexxvOES(IntBuffer coords);

    void glEnable(int32_t cap);

    void glEnableClientState(int32_t array);

    void glLoadPaletteFromModelViewMatrixOES();

    void glMatrixIndexPointerOES(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    void glMatrixIndexPointerOES(int32_t size, int32_t type, int32_t stride, int32_t offset);

    void glWeightPointerOES(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    void glWeightPointerOES(int32_t size, int32_t type, int32_t stride, int32_t offset);

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
