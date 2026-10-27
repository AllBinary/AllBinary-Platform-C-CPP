
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
        #define ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H

        
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
        
#include <java/io/InputStream.h>
class Image;
class NullImage;
class StdUtil;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonSeps;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCacheBase
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: ImageFactory* imageFactory;

    /*protected*/ public: ABHashtable<Object*, Object*>* hashtable;

    /*protected*/ public: const int32_t SIZE = 128;

    /*protected*/ public: std::vector<int32_t> widths;

    /*protected*/ public: std::vector<int32_t> heights;

    /*protected*/ public: std::vector<BasicArrayList*> listOfList;

    /*protected*/ public: std::vector<BasicArrayList*> availableListOfList;

    /*protected*/ public: int32_t volume = 0;

    /*protected*/ public: int32_t nextIndex = 0;

public: ImageCacheBase();

    /*protected*/ public: Image* getImage(Object* resourceId);
    /*protected*/ public: Image* getImage(const std::string& resourceId) { return getImage(JavaString::box(resourceId)); }

    public: void releaseAll();

    /*protected*/ public: int32_t getIndexWH(int32_t width, int32_t height);

    /*protected*/ public: Image* getFromAvailable(int32_t foundIndex, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* getWithKey(Object* key);
    public: Image* getWithKey(const std::string& key) { return getWithKey(JavaString::box(key)); }

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImageFromInputStream(Object* key, InputStream* inputStream);
    /*protected*/ public: Image* createImageFromInputStream(const std::string& key, InputStream* inputStream) { return createImageFromInputStream(JavaString::box(key), inputStream); }

    public: std::string toString();

    public: ABHashtable<Object*, Object*>* getHashtableP();

    public: void init(Image* image);

    public: void initProgress();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/image/ImageFactory.h")
#include "org/allbinary/image/ImageFactory.h"
#endif

        #endif
    
