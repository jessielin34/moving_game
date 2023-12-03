#pragma once

#include "pch.h"
#include "Utilities.h"
#include "PictureImplementation.h"
#include "Shader.h"
#include "Renderer.h"

namespace dwarf {
	class DWARF_API Picture {
		public:
			Picture();
			void Bind();
			int GetHeight() const;
			int GetWidth() const;
		private:
			std::unique_ptr<PictureImplementation> mImplementation{ nullptr };
	};
}