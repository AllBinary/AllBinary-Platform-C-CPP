
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
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

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"
//#include "org/allbinary/image/NotHTMLEndProcessor.h"
//#include "org/allbinary/image/FirstProcessor.h"
//#include "org/allbinary/image/NotHTMLProcessor.h"
//#include "org/allbinary/image/HTMLEndProcessor.h"
#include "org/allbinary/image/ImageFactory.h"

class ImageCache: public ImageCacheBase {

    public: static ImageCache* NULL_IMAGE_CACHE() { static std::unique_ptr<ImageCache> value(new ImageCache()); return value.get(); }

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: BaseImageLoadingProcessor* concurrentImageLoadingProcessor = new ConcurrentImageLoadingProcessor(this);

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: CommonSeps* commonSeps = CommonSeps::getInstance();

    protected: ResourceUtil* resourceUtil = ResourceUtil::getInstance();

    private: GameGlobalsFactory* gameGlobalsFactory = GameGlobalsFactory::getInstance();

    private: GDResources* gdResources = GDResources::getInstance();

    public: BasicArrayList* loadNowList = new BasicArrayListD();

    public: BasicArrayList* loadSoonList = new BasicArrayListD();

    public: BasicArrayList* loadList = new BasicArrayListD();

    public: BasicArrayList* loadAfterList = new BasicArrayListD();

    private: SynchObject* lock = new SynchObject();

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

            
    private: Processor* processor = new FirstProcessor();

    private: Processor* endProcessor = Processor::getInstance();

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
            
    private: bool loadImageForLazyAnimation(LazyImageRotationAnimation* lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    private: void loadNextImage();

                //@Throws(Exception.constructor)
            
    private: bool loadImage(Image* image);

                //@Throws(Exception.constructor)
            
    protected: void init(Image* image, Image* image2);

                //@Throws(Exception.constructor)
            
    protected: Image* creatImage(std::string key);

                //@Throws(Exception.constructor)
            
    public: Image* get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* getWithKey(Object* key);

    public: int32_t getIndex(Object* key);

                //@Throws(Exception.constructor)
            
    protected: Image* createImageFromInputStream(Object* key, InputStream* inputStream);

                //@Throws(Exception.constructor)
            
    protected: Image* createImageLater(std::string key, int32_t width, int32_t height);

    public: BasicArrayList* getAssociated(LazyImageRotationAnimation* lazyImageRotationAnimation);

    public: void add(LazyImageRotationAnimation* lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    public: void insertFirst(LazyImageRotationAnimation* lazyImageRotationAnimation);

    public: void progressEnded();

                //@Throws(Exception.constructor)
            
    public: void runTask();

    public: void initProgress();

    public: bool isLazy();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_H
