/**
 * Removes duplicate tracks from a playlist.
 *
 * @param {string[]} playlist
 * @returns {string[]} new playlist with unique entries
 */
export function removeDuplicates(playlist) {
  const setOfUniques = new Set(playlist);
  const playListOfUniques = Array.from(setOfUniques);
  return playListOfUniques;
}

/**
 * Checks whether a playlist includes a track.
 *
 * @param {string[]} playlist
 * @param {string} track
 * @returns {boolean} whether the track is in the playlist
 */
export function hasTrack(playlist, track) {
  const playListSet = new Set(playlist);

  return playListSet.has(track);
}

/**
 * Adds a track to a playlist.
 *
 * @param {string[]} playlist
 * @param {string} track
 * @returns {string[]} new playlist
 */
export function addTrack(playlist, track) {
  const playListSet = new Set(playlist);
  playListSet.add(track);
  const updatedPlaylist = Array.from(playListSet);
  return updatedPlaylist;
}

/**
 * Deletes a track from a playlist.
 *
 * @param {string[]} playlist
 * @param {string} track
 * @returns {string[]} new playlist
 */
export function deleteTrack(playlist, track) {
  const playListSet = new Set(playlist);
  playListSet.delete(track);
  const updatedPlaylist = Array.from(playListSet);

  return updatedPlaylist;
}

/**
 * Lists the unique artists in a playlist.
 *
 * @param {string[]} playlist
 * @returns {string[]} list of artists
 */
export function listArtists(playlist) {
  const getArtistName = (listItem) => listItem.split(' - ').pop();
  let listOfArtistNames = [];

  for(const item of playlist){
    listOfArtistNames.push(getArtistName(item));
  } 

  const setofArtistNames = new Set(listOfArtistNames);
  listOfArtistNames = Array.from(setofArtistNames);

  return listOfArtistNames;
}
