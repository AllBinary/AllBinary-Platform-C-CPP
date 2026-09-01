
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageUnifierProperties.h"
#include "ImageUnifierCell.h"
#include "ImageUnifierUtil.h"
#include "ImageProcessorInput.h"
#include "ImageProcessedVisitor.h"

class SpriteSplitterUtil
            : public Object
         {

    private: static SpriteSplitterUtil instance() { return SpriteSplitterUtil(); }

    public: static SpriteSplitterUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: const std::vector<std::string> ANIMATIONS_LABELS = 
                                                        {
                                                            "Row Total:","Column Total:","Column Total:","Row Total:","Column Total:","Row Total:"
                                                        };

    public: const std::string DIRECTIONAL_ANIMATIONS = "Directional DLRU";

    public: const std::string HORIZONTAL_ANIMATIONS = "Horizontal Animations";

    public: const std::string HORIZONTAL_SPRITE = "Horizontal A=R=Y F=C=X";

    private: const std::vector<std::string> ROW_NAME = 
                                                        {
                                                            "idle","walk","attack","defeat"
                                                        };

    private: const std::string _ROW = "_row";

                //@Throws(Exception.constructor)
            
    public: void process(ImageProcessorInput imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, std::string spriteType, ImageProcessedVisitor visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H
