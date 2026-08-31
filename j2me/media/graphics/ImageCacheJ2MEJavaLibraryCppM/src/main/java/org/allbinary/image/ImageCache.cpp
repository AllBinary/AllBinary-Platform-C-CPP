
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCacheBase.h"

class ImageCache: public ImageCacheBase {
        

    public static const NULL_IMAGE_CACHE: ImageCache = new ImageCache();

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (){

            super();
        }


    public addListener(any = {} renderer){
}


    public int32_t getIndex(any = {} key){

    gdResources: GDResources = GDResources.getInstance()!;;
    

    resourceStringArray: std::vector<string> = gdResources!.resourceStringArray;;
    

    size: int32_t = resourceStringArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(resourceStringArray[index] == key)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}

this.logUtil!.putF(new StringMaker().append("unable to find key: ")!.append(StringUtil.getInstance()!.toString(key))!.toString(), this, this.commonStrings!.RUN);
    



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public Image get(string caller, int32_t width, int32_t height){

    foundIndex: int32_t = this.getIndexWH(width, height)!;;
    

    image: Image = this.getFromAvailable(foundIndex, width, height)!;;
    

                        if(image == NullImage.NULL_IMAGE)
                        
                                    {
                                    this.volume += width *height;
    

                        if(this.volume > 32000)
                        
                                    {
                                    System.gc();
    
this.volume= 0;
    

                                    }
                                
image= this.createImage(caller, width, height);
    

    widths: std::vector<int32_t> = this.widths;;
    

                        if(this.nextIndex > widths.length -1)
                        
                                    {
                                    
                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this.nextIndex;
    
widths[this.nextIndex]= width;
    
this.heights[this.nextIndex]= height;
    
this.nextIndex++;
    

                                    }
                                
this.listOfList[foundIndex]!.add(image);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public Image getWithKey(any = {} key){

    image: Image = this.getImage(key)!;;
    

                        if(image == NullImage.NULL_IMAGE)
                        
                                    {
                                    
    resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;;
    

    inputStream: InputStream = resourceUtil!.getResourceAsStream(key as string)!;;
    

                        if(inputStream == 
                                    null
                                )
                        
                                    {
                                    


                            throw new RuntimeException(new StringMaker().append("Image resource is not available for key: ")!.append(StringUtil.getInstance()!.toString(key))!.toString());
                    

                                    }
                                

        try {
            image= this.createImageFromInputStream(key, inputStream);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Exception: Trying Again After GC", this, this.commonStrings!.GET, e);
    
this.logUtil!.putF(new StringMaker().append("InputStream: ")!.append(StringUtil.getInstance()!.toString(inputStream))!.toString(), this, this.commonStrings!.GET);
    
System.gc();
    
System.gc();
    
this.logUtil!.putF(Memory.getInfo(), this, this.commonStrings!.GET);
    
Thread.sleep(100);
    
image= this.createImageFromInputStream(key, inputStream);
    
}

inputStream!.close();
    
this.hashtable.put(key, image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public loadImageForAnimation(){
}


    public progressEnded(){
}


    public runTask(){
}


    public bool isLazy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

