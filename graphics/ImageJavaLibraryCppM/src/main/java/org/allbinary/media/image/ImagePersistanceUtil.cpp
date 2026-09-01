
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <java/util/Iterator.h>

      
#include <javax/imageio/IIOImage.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <javax/imageio/ImageWriteParam.h>

      
#include <javax/imageio/ImageWriter.h>

      
#include <javax/imageio/stream/ImageOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/batik/ext/awt/image/codec/png/PNGImageWriter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImagePersistanceUtil
            : public Object
         {

    private: static ImagePersistanceUtil instance() { return ImagePersistanceUtil(); }

    public: static ImagePersistanceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImagePersistanceUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void saveWithBatik(AbFile file, BufferedImage bufferedImage){

    PNGImageWriter batikPNGImageWriter = PNGImageWriter();;
    

    AbFileOutputStream fileOutputStream = AbFileOutputStream::createFromAbFile(file);;
    

        try {
            batikPNGImageWriter.writeImage(bufferedImage, fileOutputStream);
    

         finally {
            fileOutputStream.flush();
    
StreamUtil::getInstance().close(fileOutputStream);
    

         }
        
this->logUtil.putF("Wrote Image: " +file.getAbsolutePath(), this, this->commonStrings.SAVE);
    
}


    public: void saveWithImageIO(std::string filePath, BufferedImage bufferedImage){
this->saveWithImageIO(File(filePath), bufferedImage);
    
}


    public: void saveWithImageIO(File file, BufferedImage bufferedImage){

    ImageWriter writer = 
                null
            ;;
    

    ImageOutputStream ios = 
                null
            ;;
    

        try {
            
    Iterator iter = ImageIO::getImageWritersByFormatName("jpeg");;
    

                        if(!iter.hasNext())
                        
                                    {
                                    this->logUtil.putF("Unable to save image to jpeg file type.", this, this->commonStrings.SAVE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
writer= iter.next() as ImageWriter;
    
ios= ImageIO::createImageOutputStream(file);
    
writer.setOutput(ios);
    

    ImageWriteParam iwp = writer.getDefaultWriteParam();;
    
iwp.setCompressionMode(ImageWriteParam::MODE_EXPLICIT);
    
iwp.setCompressionQuality(0.95);
    
writer.write(
                            nullptr, IIOImage(bufferedImage, 
                            nullptr, 
                            nullptr), iwp);
    
this->logUtil.putF("Wrote Image: " +file.getAbsolutePath(), this, this->commonStrings.SAVE);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.SAVE, e);
    
}

         finally {
            
        try {
            
                        if(ios != 
                                    nullptr
                                )
                        
                                    {
                                    ios.flush();
    

        try {
            
                        if(ios != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF(ios.toString(), ios, this->commonStrings.CLOSE);
    
ios.close();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, ios, commonStrings.CLOSE, e);
    
}


                                    }
                                

                        if(writer != 
                                    nullptr
                                )
                        
                                    {
                                    writer.dispose();
    

                                    }
                                

                //: 
} catch(e2) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.SAVE, e2);
    
}


         }
        
}


};

            

