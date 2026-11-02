
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class Image;
class NullImage;
class J2MEUtil;
class TsUtil;
class LazyImageRotationAnimation;
class GameGlobalsFactory;
#include <org/allbinary/canvas/Processor.h>
class LogUtil;
class CommonStrings;
class StringMaker;
class ResourceUtil;
class ABToGBUtil;
class AllBinaryGameCanvas;
class GDLazyResources;
class GDResources;
class ProgressCanvas;
class ProgressCanvasFactory;
class CommonSeps;
class StringUtil;
class Memory;
class BaseImageLoadingProcessor;
class ConcurrentImageLoadingProcessor;
class SynchObject;
class BasicArrayList;
class BasicArrayListD;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"
//class NotHTMLEndProcessor;
//class FirstProcessor;
//class NotHTMLProcessor;
//class HTMLEndProcessor;
class ImageFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCache: public ImageCacheBase {
private: class NotHTMLProcessor;
private: class NotHTMLEndProcessor;
private: class HTMLEndProcessor;
private: class FirstProcessor;

    private: static ImageCache* NULL_IMAGE_CACHE_owner();
    public: static ImageCache* NULL_IMAGE_CACHE;

    private: TsUtil* tsUtil;

    private: BaseImageLoadingProcessor* concurrentImageLoadingProcessor;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: ResourceUtil* resourceUtil;

    private: GameGlobalsFactory* gameGlobalsFactory;

    private: GDResources* gdResources;

    public: BasicArrayList* loadNowList;

    public: BasicArrayList* loadSoonList;

    public: BasicArrayList* loadList;

    public: BasicArrayList* loadAfterList;

    private: SynchObject* lock;

    private: bool firstTime = true;

    private: int32_t totalLoaded = 0;

    public: bool progressEnded_ = false;

    public: bool hasAnyLazyAnimationFactories = false;

//inner= member=true isStatic=
private: class NotHTMLProcessor: public Processor {

    public: ImageCache* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: NotHTMLProcessor();
        
    public: void process();

};

            
//inner= member=true isStatic=
private: class NotHTMLEndProcessor: public Processor {

    public: ImageCache* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: NotHTMLEndProcessor();
        
    public: void process();

};

            
//inner= member=true isStatic=
private: class HTMLEndProcessor: public Processor {

    public: ImageCache* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: HTMLEndProcessor();
        
    public: void process();

};

            
//inner= member=true isStatic=
private: class FirstProcessor: public Processor {

    public: ImageCache* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: FirstProcessor();
        
    public: void process();

};

            
    private: Processor* processor;

    private: Processor* endProcessor;

public: ImageCache();

    public: void firstProcess();

    public: void addListener(Object* renderer);
    public: void addListener(const std::string& renderer) { return addListener(JavaString::box(renderer)); }

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
            
    /*protected*/ public: void init(Image* image, Image* image2);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* creatImage(std::string key);

                //@Throws(Exception.constructor)
            
    public: Image* get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* getWithKey(Object* key);
    public: Image* getWithKey(const std::string& key) { return getWithKey(JavaString::box(key)); }

    public: int32_t getIndex(Object* key);
    public: int32_t getIndex(const std::string& key) { return getIndex(JavaString::box(key)); }

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImageFromInputStream(Object* key, InputStream* inputStream);
    /*protected*/ public: Image* createImageFromInputStream(const std::string& key, InputStream* inputStream) { return createImageFromInputStream(JavaString::box(key), inputStream); }

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImageLater(std::string key, int32_t width, int32_t height);

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGECACHE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/animation/image/LazyImageRotationAnimation.h>)
#include <org/allbinary/animation/image/LazyImageRotationAnimation.h>
#endif
#if __has_include(<org/allbinary/canvas/GameGlobalsFactory.h>)
#include <org/allbinary/canvas/GameGlobalsFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/game/canvas/ABToGBUtil.h>)
#include <org/allbinary/game/canvas/ABToGBUtil.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/gd/resource/GDLazyResources.h>)
#include <org/allbinary/game/gd/resource/GDLazyResources.h>
#endif
#if __has_include(<org/allbinary/game/gd/resource/GDResources.h>)
#include <org/allbinary/game/gd/resource/GDResources.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/system/Memory.h>)
#include <org/allbinary/system/Memory.h>
#endif
#if __has_include(<org/allbinary/thread/BaseImageLoadingProcessor.h>)
#include <org/allbinary/thread/BaseImageLoadingProcessor.h>
#endif
#if __has_include(<org/allbinary/thread/ConcurrentImageLoadingProcessor.h>)
#include <org/allbinary/thread/ConcurrentImageLoadingProcessor.h>
#endif
#if __has_include(<org/allbinary/thread/SynchObject.h>)
#include <org/allbinary/thread/SynchObject.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include("org/allbinary/image/ImageCacheBase.h")
#include "org/allbinary/image/ImageCacheBase.h"
#endif
#if __has_include("org/allbinary/image/ImageFactory.h")
#include "org/allbinary/image/ImageFactory.h"
#endif

        #endif
    
