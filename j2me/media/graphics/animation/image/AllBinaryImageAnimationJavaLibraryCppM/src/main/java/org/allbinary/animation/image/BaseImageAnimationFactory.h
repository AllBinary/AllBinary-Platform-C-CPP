
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class NullAnimationFactory;
class AnimationFactoryImageScaleUtil;

class StringMaker;
class ScaleProperties;
class CommonLabels;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AnimationFactoryInitializationVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseImageAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static BaseImageAnimationFactory* createFactoryBase(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

    /*protected*/ public: AnimationFactoryImageScaleUtil* animationFactoryImageScaleUtil;

    private: Image* image;

    public: AnimationBehaviorFactory* animationBehaviorFactory;

    private: std::vector<int32_t> sequenceArray;

    /*protected*/ public: AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor;

    /*protected*/ public: ScaleProperties* scaleProperties;

public: BaseImageAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: Image* getImage();

    public: std::vector<int32_t> getSequenceArray();

    public: void setInitialScale(ScaleProperties* scaleProperties);

    public: AnimationFactoryInitializationVisitor* getAnimationFactoryInitializationVisitorP();

    public: ScaleProperties* getScalePropertiesP();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/image/AnimationFactoryImageScaleUtil.h>)
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h")
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#endif

        #endif
    
