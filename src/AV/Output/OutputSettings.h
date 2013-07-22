/*
Copyright (c) 2012-2013 Maarten Baert <maarten-baert@hotmail.com>

This file is part of SimpleScreenRecorder.

SimpleScreenRecorder is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SimpleScreenRecorder is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SimpleScreenRecorder.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "Global.h"

struct OutputSettings {

	QString file;
	QString container_avname;

	QString video_codec_avname;
	unsigned int video_kbit_rate;
	std::vector<std::pair<QString, QString> > video_options;
	unsigned int video_width, video_height;
	unsigned int video_frame_rate;

	QString audio_codec_avname;
	unsigned int audio_kbit_rate;
	std::vector<std::pair<QString, QString> > audio_options;
	unsigned int audio_sample_rate;

};