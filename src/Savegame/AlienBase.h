#pragma once
/*
 * Copyright 2010-2016 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "Target.h"
#include <string>
#include "../Mod/AlienDeployment.h"
#include <yaml-cpp/yaml.h>

namespace OpenXcom
{

/**
 * Represents an alien base on the world.
 */
class AlienBase : public Target
{
private:
	std::string _race;
	bool _inBattlescape, _discovered;
	AlienDeployment *_deployment;
public:
	/// Creates an alien base.
	AlienBase(AlienDeployment *deployment);
	/// Cleans up the alien base.
	~AlienBase();
	/// Loads the alien base from YAML.
	void load(const YAML::Node& node);
	/// Saves the alien base to YAML.
	YAML::Node save() const;
	/// Gets the alien base's type.
	std::string getType() const;
	/// Gets the alien base's marker sprite.
	int getMarker() const;
	/// Gets the alien base's amount of active hours.
	std::string getAlienRace() const;
	/// Sets the alien base's alien race.
	void setAlienRace(const std::string &race);
	/// Sets the alien base's battlescape status.
	void setInBattlescape(bool inbattle);
	/// Gets the alien base's battlescape status.
	bool isInBattlescape() const;
	/// Gets the alien base's discovered status.
	bool isDiscovered() const;
	/// Sets the alien base's discovered status.
	void setDiscovered(bool discovered);

	AlienDeployment *getDeployment() const;
 
};

}
