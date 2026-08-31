
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
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
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static OpenGLConfiguration getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const FILE: string = "OpenGLConfiguration.dat";

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: opengl: bool = false;

    private: type: OpenGLFeature = OpenGLFeatureFactory.getInstance()!.OPENGL_AS_GAME_THREAD;

    private: imageColor: OpenGLFeature = OpenGLFeatureFactory.getInstance()!.IMAGE_COLOR_DEPTH_4444;

    private: color: OpenGLFeature = OpenGLFeatureFactory.getInstance()!.IMAGE_COLOR_DEPTH_4444;

    private: versionSelector: OpenGLFeature = OpenGLFeatureFactory.getInstance()!.OPENGL_AUTO_SELECT;

private constructor ();

                //@Throws(Exception.constructor)
            
    read();

                //@Throws(Exception.constructor)
            
    public write();

                //@Throws(Exception.constructor)
            
    public init();

                //@Throws(Exception.constructor)
            
    public update(Feature gameFeature, bool colorLocked);

    public setOpenGL(bool opengl);

    public bool isOpenGL();

    public setImageColor(OpenGLFeature imageColor);

    public OpenGLFeature getImageColor();

    public setColor(OpenGLFeature color);

    public OpenGLFeature getColor();

    public setVersionSelector(OpenGLFeature versionSelector);

    public OpenGLFeature getVersionSelector();

    public setType(OpenGLFeature type);

    public OpenGLFeature getType();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_H
