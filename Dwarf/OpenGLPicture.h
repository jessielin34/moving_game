#pragma once

#include "pch.h"
#include "PictureImplementation.h"

namespace dwarf {
	class OpenGLPicture : public PictureImplementation {
	public: 
		OpenGLPicture(const std::string& file);
		OpenGLPicture(std::string&& file);
		virtual void Bind() override;
		~OpenGLPicture();
		virtual int GetHeight() const override;
		virtual int GetWidth() const override;
	private:
		unsigned int texture;
		//int nrChannels{ 0 };
		int mWidth{ 0 };
		int mHeight{ 0 };
	};
}
