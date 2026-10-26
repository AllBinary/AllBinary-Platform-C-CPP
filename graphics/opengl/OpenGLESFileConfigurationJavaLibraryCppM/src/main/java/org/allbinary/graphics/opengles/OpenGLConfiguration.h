
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLFeatureFactory.h"
#include "OpenGLFeature.h"

class OpenGLConfiguration
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static OpenGLConfiguration getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string FILE = "OpenGLConfiguration.dat";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: bool opengl = false;

    private: OpenGLFeature type = OpenGLFeatureFactory::getInstance().OPENGL_AS_GAME_THREAD;

    private: OpenGLFeature imageColor = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature color = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature versionSelector = OpenGLFeatureFactory::getInstance().OPENGL_AUTO_SELECT;

private: OpenGLConfiguration();

                //@Throws(Exception.constructor)
            
    private: void read();

                //@Throws(Exception.constructor)
            
    public: void write();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update(Feature gameFeature, bool colorLocked);

    public: void setOpenGL(bool opengl);

    public: bool isOpenGL();

    public: void setImageColor(OpenGLFeature imageColor);

    public: OpenGLFeature getImageColor();

    public: void setColor(OpenGLFeature color);

    public: OpenGLFeature getColor();

    public: void setVersionSelector(OpenGLFeature versionSelector);

    public: OpenGLFeature getVersionSelector();

    public: void setType(OpenGLFeature type);

    public: OpenGLFeature getType();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H
