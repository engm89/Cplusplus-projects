//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// // Copyright 2013 Olli Mämmelä (VTT)

package inet.applications.dde;

simple RLagent
{
    parameters:         
       @display("i=block/cogwheel");
       double gamma; // discount factor
       double alpha; // learning rate
       double epsilon; // exploration probability
       double beeta; // temperature parameter
}
