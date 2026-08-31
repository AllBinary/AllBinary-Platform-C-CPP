
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/device/NullGL10.h>

      
#include <org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
//ImageCacheOpenGLESJavaLibrary
class OpenGLImageCache: public ImageCache {
        

    private: const imageCache: ImageCache = ImageCacheFactory.getInstance()!;

    private: const preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;

    private: gl: GL10 = NullGL10.NULL_GL10;

    private: const lock: SynchObject = new SynchObject();

    private: const list: BasicArrayList = new BasicArrayListD();

    private: renderer: AllBinaryRendererBase3 = new AllBinaryRendererBase3();

public constructor (){

            super();
        }


    public addListener(any = {} renderer){
this.renderer= renderer as AllBinaryRendererBase3;
    
}


                //@Throws(Exception.constructor)
            
    public update(GL10 gl){
this.gl= gl;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lock) 

        //mutex.withLock
        




                        for (
    index: int32_t = this.list.size() -1;index >= 0; index--)
        {

    openGLESImage: OpenGLESImage = (this.list.objectArray[index]! as OpenGLESImage);;
    

                        if(openGLESImage != OpenGLESImage.NULL_OPENGL_IMAGE)
                        
                                    {
                                    openGLESImage!.set(gl);
    

                                    }
                                
}



}


                //@Throws(Exception.constructor)
            
    Image createImage(string caller, int32_t width, int32_t height){

    textureSize: int32_t = width;;
    

                        if(height > width)
                        
                                    {
                                    textureSize= height;
    

                                    }
                                

        while((textureSize % 4) != 0)
        {
textureSize++;
    
}

width= textureSize;
    
height= textureSize;
    

    image2: Image = this.imageCache!.get(caller, width, height)!;;
    

    image: Image = this.preResourceImageUtil!.encapsulate(image2)!;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lock) 

        //mutex.withLock
        

                        if(image != NullImage.NULL_IMAGE)
                        
                                    {
                                    this.list.add(image);
    

                                    }
                                





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    Image createImageFromInputStream(any = {} key, InputStream inputStream){

    cachedImage: Image = this.imageCache!.getWithKey(key)!;;
    

    image: Image = this.preResourceImageUtil!.encapsulate(cachedImage)!;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lock) 

        //mutex.withLock
        

                        if(image != NullImage.NULL_IMAGE)
                        
                                    {
                                    this.list.add(image);
    

                                    }
                                





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public GL10 getGlP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gl;
    
}


    public init(Image image){

        try {
            
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lock) 

        //mutex.withLock
        

                        if(this.list.contains(image))
                        
                                    {
                                    


                            throw new RuntimeException();
                    

                                    }
                                
this.list.add(image);
    


this.renderer.add(image);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    
}

}


};

            

