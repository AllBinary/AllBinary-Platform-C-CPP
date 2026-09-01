
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

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullImage.h"
#include "Image.h"
#include "Graphics.h"
//PlatformNullImageJavaLibrary
class PlatformImage
            : public Object
         {

    public: Object* getImage(Object* graphicsSurface2);

    public: int32_t getSurfaceWidth(Object* graphicsSurface2, int32_t width);

    public: int32_t getSurfaceHeight(Object* graphicsSurface2, int32_t height);

    public: int32_t getWidth(Image image, int32_t width);

    public: int32_t getHeight(Image image, int32_t height);

    public: javax::microedition::lcdui::Graphics getGraphics(Object* graphicsSurface, int32_t width, int32_t height, Image image);

    public: void drawImage(Image image, int32_t x, int32_t y, int32_t anchor, javax::microedition::lcdui::Graphics g2, Object* g);

    public: void drawRegion(Image image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, javax::microedition::lcdui::Graphics g);

    public: void getRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image image);

    public: void setRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image image);

    public: std::vector<int32_t> getData(Image image);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H
