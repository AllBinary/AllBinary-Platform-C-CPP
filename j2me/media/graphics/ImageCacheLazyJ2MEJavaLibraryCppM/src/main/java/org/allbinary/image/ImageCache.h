
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
        

    public static const NULL_IMAGE_CACHE: ImageCache = new ImageCache();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const concurrentImageLoadingProcessor: BaseImageLoadingProcessor = new ConcurrentImageLoadingProcessor(this);

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;

    private: const gameGlobalsFactory: GameGlobalsFactory = GameGlobalsFactory.getInstance()!;

    private: const gdResources: GDResources = GDResources.getInstance()!;

    public const loadNowList: BasicArrayList = new BasicArrayListD();

    public const loadSoonList: BasicArrayList = new BasicArrayListD();

    public const loadList: BasicArrayList = new BasicArrayListD();

    public const loadAfterList: BasicArrayList = new BasicArrayListD();

    private: const lock: SynchObject = new SynchObject();

    private: firstTime: bool = true;

    private: totalLoaded: int32_t = 0;

    public progressEnded: bool = false;

    public hasAnyLazyAnimationFactories: bool = false;

//inner= member=true isStatic=
class NotHTMLProcessor: public Processor {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    public process();

};

            
//inner= member=true isStatic=
class NotHTMLEndProcessor: public Processor {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    public process();

};

            
//inner= member=true isStatic=
class HTMLEndProcessor: public Processor {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    public process();

};

            
//inner= member=true isStatic=
class FirstProcessor: public Processor {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    public process();

};

            
    private: processor: Processor = new this.FirstProcessor();

    private: endProcessor: Processor = Processor.getInstance()!;

public constructor ();

    public firstProcess();

    public addListener(any = {} renderer);

                //@Throws(Exception.constructor)
            
    public waitForLoadNow();

    private: const LOAD_IMAGE_FOR_ANIMATION: string = "Load Image Animation";

                //@Throws(Exception.constructor)
            
    public loadImageForAnimation();

                //@Throws(Exception.constructor)
            
    public loadImages();

                //@Throws(Exception.constructor)
            
    public loadImageForAnimations();

                //@Throws(Exception.constructor)
            
    public loadRemainingAnimations();

                //@Throws(Exception.constructor)
            
    bool loadImageForLazyAnimation(LazyImageRotationAnimation lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    loadNextImage();

                //@Throws(Exception.constructor)
            
    bool loadImage(Image image);

                //@Throws(Exception.constructor)
            
    init(Image image, Image image2);

                //@Throws(Exception.constructor)
            
    Image creatImage(string key);

                //@Throws(Exception.constructor)
            
    public Image get(string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public Image getWithKey(any = {} key);

    public int32_t getIndex(any = {} key);

                //@Throws(Exception.constructor)
            
    Image createImageFromInputStream(any = {} key, InputStream inputStream);

                //@Throws(Exception.constructor)
            
    Image createImageLater(string key, int32_t width, int32_t height);

    public BasicArrayList getAssociated(LazyImageRotationAnimation lazyImageRotationAnimation);

    public add(LazyImageRotationAnimation lazyImageRotationAnimation);

                //@Throws(Exception.constructor)
            
    public insertFirst(LazyImageRotationAnimation lazyImageRotationAnimation);

    public progressEnded();

                //@Throws(Exception.constructor)
            
    public runTask();

    public initProgress();

    public bool isLazy();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_H
