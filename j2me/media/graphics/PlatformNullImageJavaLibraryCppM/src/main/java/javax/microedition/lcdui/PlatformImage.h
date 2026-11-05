
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H
        #define JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullImage;
class Image;
class Graphics;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //PlatformNullImageJavaLibrary
class PlatformImage
            : public virtual Object
         {


            
    public: PlatformImage();
        
    public: Object* getImage(Object* graphicsSurface2);
    public: Object* getImage(const std::string& graphicsSurface2) { return getImage(JavaString::box(graphicsSurface2)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* getImage(BoxValue graphicsSurface2) { return getImage(JavaBoxes::toObject(graphicsSurface2)); }
    public: template<typename BoxElement> Object* getImage(const std::vector<BoxElement>& graphicsSurface2) { return getImage(JavaBoxes::toObject(graphicsSurface2)); }

    public: int32_t getSurfaceWidth(Object* graphicsSurface2, int32_t width);
    public: int32_t getSurfaceWidth(const std::string& graphicsSurface2, int32_t width) { return getSurfaceWidth(JavaString::box(graphicsSurface2), width); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t getSurfaceWidth(BoxValue graphicsSurface2, int32_t width) { return getSurfaceWidth(JavaBoxes::toObject(graphicsSurface2), width); }
    public: template<typename BoxElement> int32_t getSurfaceWidth(const std::vector<BoxElement>& graphicsSurface2, int32_t width) { return getSurfaceWidth(JavaBoxes::toObject(graphicsSurface2), width); }

    public: int32_t getSurfaceHeight(Object* graphicsSurface2, int32_t height);
    public: int32_t getSurfaceHeight(const std::string& graphicsSurface2, int32_t height) { return getSurfaceHeight(JavaString::box(graphicsSurface2), height); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t getSurfaceHeight(BoxValue graphicsSurface2, int32_t height) { return getSurfaceHeight(JavaBoxes::toObject(graphicsSurface2), height); }
    public: template<typename BoxElement> int32_t getSurfaceHeight(const std::vector<BoxElement>& graphicsSurface2, int32_t height) { return getSurfaceHeight(JavaBoxes::toObject(graphicsSurface2), height); }

    public: int32_t getWidth(Image* image, int32_t width);

    public: int32_t getHeight(Image* image, int32_t height);

    public: Graphics* getGraphics(Object* graphicsSurface, int32_t width, int32_t height, Image* image);
    public: Graphics* getGraphics(const std::string& graphicsSurface, int32_t width, int32_t height, Image* image) { return getGraphics(JavaString::box(graphicsSurface), width, height, image); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Graphics* getGraphics(BoxValue graphicsSurface, int32_t width, int32_t height, Image* image) { return getGraphics(JavaBoxes::toObject(graphicsSurface), width, height, image); }
    public: template<typename BoxElement> Graphics* getGraphics(const std::vector<BoxElement>& graphicsSurface, int32_t width, int32_t height, Image* image) { return getGraphics(JavaBoxes::toObject(graphicsSurface), width, height, image); }

    public: void drawImage(Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, Object* g);
    public: void drawImage(Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, const std::string& g) { return drawImage(image, x, y, anchor, g2, JavaString::box(g)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void drawImage(Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, BoxValue g) { return drawImage(image, x, y, anchor, g2, JavaBoxes::toObject(g)); }
    public: template<typename BoxElement> void drawImage(Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, const std::vector<BoxElement>& g) { return drawImage(image, x, y, anchor, g2, JavaBoxes::toObject(g)); }

    public: void drawRegion(Image* image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, Graphics* g);

    public: void getRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image);

    public: void setRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image);

    public: std::vector<int32_t> getData(Image* image);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("javax/microedition/lcdui/NullImage.h")
#include "javax/microedition/lcdui/NullImage.h"
#endif
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("javax/microedition/lcdui/Graphics.h")
#include "javax/microedition/lcdui/Graphics.h"
#endif

        #endif
    
