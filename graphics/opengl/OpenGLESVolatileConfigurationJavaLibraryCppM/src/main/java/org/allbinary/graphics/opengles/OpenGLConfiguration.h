
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class StringMaker;
class LogUtil;
class PreLogUtil;
class ChangedGameFeatureListener;
class Feature;
class Features;
class MainFeatureFactory;
class NullUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLFeatureFactory;
class OpenGLFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLConfiguration
            : public virtual Object
         {

    private: static Object* instance;

    public: static OpenGLConfiguration* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: bool opengl = false;

    private: OpenGLFeature* type;

    private: OpenGLFeature* imageColor;

    private: OpenGLFeature* color;

    private: OpenGLFeature* versionSelector;

private: OpenGLConfiguration();

    public: void write();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update(Feature* gameFeature, bool colorLocked);

    public: void setOpenGL(bool opengl);

    public: bool isOpenGL();

    public: void setImageColor(OpenGLFeature* imageColor);

    public: OpenGLFeature* getImageColor();

    public: void setColor(OpenGLFeature* color);

    public: OpenGLFeature* getColor();

    public: void setVersionSelector(OpenGLFeature* versionSelector);

    public: OpenGLFeature* getVersionSelector();

    public: void setType(OpenGLFeature* type);

    public: OpenGLFeature* getType();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Feature.h>)
#include <org/allbinary/game/configuration/feature/Feature.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeature.h")
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"
#endif

        #endif
    
