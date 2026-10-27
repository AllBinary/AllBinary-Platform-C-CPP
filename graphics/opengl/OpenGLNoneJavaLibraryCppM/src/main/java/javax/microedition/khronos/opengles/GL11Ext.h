
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H

        
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
#include <java/nio/ShortBuffer.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/khronos/opengles/GL.h"

            // Interfaces do not have static fields, so create a C++ helper class.
            class GL11ExtI {
        
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_OES = 34884;
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;
    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;
    public: static inline const int32_t GL_MATRIX_PALETTE_OES = 34880;
    public: static inline const int32_t GL_MAX_PALETTE_MATRICES_OES = 34882;
    public: static inline const int32_t GL_MAX_VERTEX_UNITS_OES = 34468;
    public: static inline const int32_t GL_TEXTURE_CROP_RECT_OES = 35741;
    public: static inline const int32_t GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;
    public: static inline const int32_t GL_WEIGHT_ARRAY_OES = 34477;
    public: static inline const int32_t GL_WEIGHT_ARRAY_POINTER_OES = 34476;
    public: static inline const int32_t GL_WEIGHT_ARRAY_SIZE_OES = 34475;
    public: static inline const int32_t GL_WEIGHT_ARRAY_STRIDE_OES = 34474;
    public: static inline const int32_t GL_WEIGHT_ARRAY_TYPE_OES = 34473;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            };
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GL11Ext: public GL {

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_OES = 34884;

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;

    public: static inline const int32_t GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;

    public: static inline const int32_t GL_MATRIX_PALETTE_OES = 34880;

    public: static inline const int32_t GL_MAX_PALETTE_MATRICES_OES = 34882;

    public: static inline const int32_t GL_MAX_VERTEX_UNITS_OES = 34468;

    public: static inline const int32_t GL_TEXTURE_CROP_RECT_OES = 35741;

    public: static inline const int32_t GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;

    public: static inline const int32_t GL_WEIGHT_ARRAY_OES = 34477;

    public: static inline const int32_t GL_WEIGHT_ARRAY_POINTER_OES = 34476;

    public: static inline const int32_t GL_WEIGHT_ARRAY_SIZE_OES = 34475;

    public: static inline const int32_t GL_WEIGHT_ARRAY_STRIDE_OES = 34474;

    public: static inline const int32_t GL_WEIGHT_ARRAY_TYPE_OES = 34473;

    public: virtual void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> param, int32_t offset) = 0;

    public: virtual void glCurrentPaletteMatrixOES(int32_t matrixpaletteindex) = 0;

    public: virtual void glDrawTexfOES(float x, float y, float z, float width, float height) = 0;

    public: virtual void glDrawTexfvOES(std::vector<float> coords, int32_t offset) = 0;

    public: virtual void glDrawTexfvOES(FloatBuffer* coords) = 0;

    public: virtual void glDrawTexiOES(int32_t x, int32_t y, int32_t z, int32_t width, int32_t height) = 0;

    public: virtual void glDrawTexivOES(std::vector<int32_t> coords, int32_t offset) = 0;

    public: virtual void glDrawTexivOES(IntBuffer* coords) = 0;

    public: virtual void glDrawTexsOES(int16_t x, int16_t y, int16_t z, int16_t width, int16_t height) = 0;

    public: virtual void glDrawTexsvOES(std::vector<int16_t> coords, int32_t offset) = 0;

    public: virtual void glDrawTexsvOES(ShortBuffer* coords) = 0;

    public: virtual void glDrawTexxOES(int32_t x, int32_t y, int32_t z, int32_t width, int32_t height) = 0;

    public: virtual void glDrawTexxvOES(std::vector<int32_t> coords, int32_t offset) = 0;

    public: virtual void glDrawTexxvOES(IntBuffer* coords) = 0;

    public: virtual void glEnable(int32_t cap) = 0;

    public: virtual void glEnableClientState(int32_t array) = 0;

    public: virtual void glLoadPaletteFromModelViewMatrixOES() = 0;

    public: virtual void glMatrixIndexPointerOES(int32_t size, int32_t type, int32_t stride, Buffer* pointer) = 0;

    public: virtual void glMatrixIndexPointerOES(int32_t size, int32_t type, int32_t stride, int32_t offset) = 0;

    public: virtual void glWeightPointerOES(int32_t size, int32_t type, int32_t stride, Buffer* pointer) = 0;

    public: virtual void glWeightPointerOES(int32_t size, int32_t type, int32_t stride, int32_t offset) = 0;

};

            


        #endif //JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H_COMPLETE)
        #define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H_COMPLETE
        #if __has_include(<java/nio/Buffer.h>)
#include <java/nio/Buffer.h>
#endif
#if __has_include(<java/nio/FloatBuffer.h>)
#include <java/nio/FloatBuffer.h>
#endif
#if __has_include(<java/nio/IntBuffer.h>)
#include <java/nio/IntBuffer.h>
#endif
#if __has_include(<java/nio/ShortBuffer.h>)
#include <java/nio/ShortBuffer.h>
#endif
#if __has_include("javax/microedition/khronos/opengles/GL.h")
#include "javax/microedition/khronos/opengles/GL.h"
#endif

        #endif
    
