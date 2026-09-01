
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHE_H
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_H

            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/image/LazyImageRotationAnimation.h>

      
#include <org/allbinary/canvas/GameGlobalsFactory.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/canvas/ABToGBUtil.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/gd/resource/GDLazyResources.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/system/Memory.h>

      
#include <org/allbinary/thread/BaseImageLoadingProcessor.h>

      
#include <org/allbinary/thread/ConcurrentImageLoadingProcessor.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCacheBase.h"
//#include "NotHTMLEndProcessor.h"
//#include "FirstProcessor.h"
//#include "NotHTMLProcessor.h"
//#include "HTMLEndProcessor.h"

class ImageCache: public ImageCacheBase {

    public: static const ImageCache NULL_IMAGE_CACHE = ImageCache();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BaseImageLoadingProcessor concurrentImageLoadingProcessor = ConcurrentImageLoadingProcessor(this);

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const ResourceUtil resourceUtil = ResourceUtil::getInstance();

    private: const GameGlobalsFactory gameGlobalsFactory = GameGlobalsFactory::getInstance();

    private: const GDResources gdResources = GDResources::getInstance();

    public: const BasicArrayList loadNowList = BasicArrayListD();

    public: const BasicArrayList loadSoonList = BasicArrayListD();

    public: const BasicArrayList loadList = BasicArrayListD();

    public: const BasicArrayList loadAfterList = BasicArrayListD();

    private: const SynchObject lock = SynchObject();

    private: bool firstTime = true;

    private: int32_t totalLoaded = 0;

    public: bool progressEnded = false;

    public: bool hasAnyLazyAnimationFactories = false;

//inner= member=true isStatic=
class NotHTMLProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process();

};

            
//inner= member=true isStatic=
class NotHTMLEndProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process();

};

            
//inner= member=true isStatic=
class HTMLEndProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process();

};

            
//inner= member=true isStatic=
class FirstProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process();

};

            
    private: Processor processor = FirstProcessor();

    private: Processor endProcessor = Processor::getInstance();

public: ImageCache();

    public: void firstProcess();

    public: void addListener(Object* renderer);

                //@Throws(Exception.constructor)
            
    public: void waitForLoadNow();

    private: const std::string LOAD_IMAGE_FOR_ANIMATION = "Load Image Animation";

                //@Throws(Exception.constructor)
            
    public: void loadImageForAnimation();

                //@Throws(Exception.constructor)
            
    public: void loadImages();

                //@Throws(Exception.constructor)
            
    public: void loadImageForAnimations();

                //@Throws(Exception.constructor)
            
    public: void loadRemainingAnimations();

                //@Throws(Exception.constructor)
            
    private: bool loadImageForLazyAnimation(LazyImageRotationAnimation lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    private: void loadNextImage();

                //@Throws(Exception.constructor)
            
    private: bool loadImage(Image image);

                //@Throws(Exception.constructor)
            
    protected: void init(Image image, Image image2);

                //@Throws(Exception.constructor)
            
    protected: Image creatImage(std::string key);

                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image getWithKey(Object* key);

    public: int32_t getIndex(Object* key);

                //@Throws(Exception.constructor)
            
    protected: Image createImageFromInputStream(Object* key, InputStream inputStream);

                //@Throws(Exception.constructor)
            
    protected: Image createImageLater(std::string key, int32_t width, int32_t height);

    public: BasicArrayList getAssociated(LazyImageRotationAnimation lazyImageRotationAnimation);

    public: void add(LazyImageRotationAnimation lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    public: void insertFirst(LazyImageRotationAnimation lazyImageRotationAnimation);

    public: void progressEnded();

                //@Throws(Exception.constructor)
            
    public: void runTask();

    public: void initProgress();

    public: bool isLazy();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_H
